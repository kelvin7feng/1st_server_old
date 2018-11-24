#include "logic_server.h"

static const int DEFAULT_BACKLOG = 100;
static const int DISCONNECTION_TIME = 5000;

LogicServer::LogicServer()
{
	loop = (uv_loop_t*)malloc(sizeof(uv_loop_t));
	server_handler = (uv_tcp_t*)malloc(sizeof(uv_tcp_t));
}

LogicServer::~LogicServer()
{
	//clear all the session
	open_sessions.clear();
	active_timers.clear();
	
	//free
	free(loop);
	free(server_handler);
}

LogicServer::LogicServer(const LogicServer & LogicServer)
{
}

int LogicServer::Init(const char* ip, int port)
{
	uv_loop_init(GetLoop());
	uv_tcp_init(GetLoop(), server_handler);

	struct sockaddr_in addr;
	uv_ip4_addr(ip, port, &addr);
	uv_tcp_bind(server_handler, (const struct sockaddr*)&addr, 0);

	int r = uv_listen((uv_stream_t*)server_handler, DEFAULT_BACKLOG,
		[](uv_stream_t* server, int status)
	{
		LogicServer::GetInstance()->OnNewConnection(server, status);
	});

	if (r) {
		fprintf(stderr, "Listen error %s: %s:%d\n", uv_strerror(r), ip, port);
		exit(1);
	}
	fprintf(stdout, "server listen: %s:%d\r\n", ip, port);

	return 0;
}

void LogicServer::Start() {
	uv_run(GetLoop(), UV_RUN_DEFAULT);
	uv_loop_close(GetLoop());
}

LogicServer* LogicServer::GetInstance()
{
	static LogicServer server;
	return &server;
}

//for test
void LogicServer::CloseHandlers()
{
	session_map_t::iterator begin = open_sessions.begin();
	session_map_t::iterator end = open_sessions.end();
	
	for (; begin != end; begin++) {
		//close handler
		RemoveClient((uv_stream_t*)begin->first);
	}

	uv_close((uv_handle_t*)server_handler, NULL);

	//close loop
	uv_loop_close(GetLoop());
}

uv_loop_t* LogicServer::GetLoop()
{
	return loop;
}

void LogicServer::AllocBuffer(uv_handle_t *handle, size_t suggested_size, uv_buf_t *buf) {
	buf->base = (char*)malloc(suggested_size);
	buf->len = suggested_size;
}

void LogicServer::OnMsgRecv(uv_stream_t *client, ssize_t nread, const uv_buf_t *buf){
	auto session_pos = open_sessions.find(client);
	if (session_pos != open_sessions.end())
	{
		bool reset_timer = false;
		if (nread == UV_EOF)
		{
			fprintf(stdout, "Client Disconnected\r\n");
			RemoveClient(client);
		}
		else if (nread > 0)
		{
			LogicServer::GetInstance()->CloseHandlers();
		}

		free(buf->base);
	}
}

void LogicServer::OnClientTimeout(uv_timer_t* handle)
{
	auto pos = active_timers.find(handle);
	if (pos != active_timers.end())
	{
		printf("Time out!\r\n");
		auto session_pos = open_sessions.find(pos->second);
		if (session_pos != open_sessions.end())
		{
			TCPSession* s = session_pos->second;
			RemoveClient((uv_stream_t*)s->connection);
		}
	}
	else
	{
		fprintf(stdout, "Session timeout timer activated, but client already left");
	}
}

void LogicServer::OnNewConnection(uv_stream_t * server, int status)
{
	if (status < 0) {
		fprintf(stderr, "New connection error %s\n", uv_strerror(status));
		return;
	}

	TCPSession* new_session = new TCPSession;
	uv_tcp_init(GetLoop(), new_session->connection);
	uv_timer_init(GetLoop(), new_session->activity_timer);
	if (uv_accept(server, (uv_stream_t*)new_session->connection) == 0) {
		uv_read_start((uv_stream_t*)new_session->connection,
			[](uv_handle_t* stream, size_t nread, uv_buf_t *buf)
		{
			LogicServer::GetInstance()->AllocBuffer(stream, nread, buf);
		},
			[](uv_stream_t* stream, ssize_t nread, const uv_buf_t* buf)
		{
			LogicServer::GetInstance()->OnMsgRecv(stream, nread, buf);
		});

		uv_stream_t* key = (uv_stream_t*)new_session->connection;
		open_sessions.insert({ key, new_session });

		active_timers.insert({ new_session->activity_timer, key });
		uv_timer_start(new_session->activity_timer,
			[](uv_timer_t* handle)
		{
			LogicServer::GetInstance()->OnClientTimeout(handle);
		},
			DISCONNECTION_TIME,
			0);
		printf("Session Saved!\r\n");
	}
	else {
		uv_close((uv_handle_t*)new_session->connection, NULL);
	}
}

void LogicServer::RemoveClient(uv_stream_t* client)
{
	auto connection_pos = open_sessions.find(client);
	if (connection_pos != open_sessions.end())
	{
		//stop timer: crash !!!
		uv_close((uv_handle_t*)connection_pos->second->activity_timer,
			[](uv_handle_t* handle)
		{
			LogicServer::GetInstance()->OnTimerClose(handle);
		});

		uv_read_stop(client);
		uv_close((uv_handle_t*)client,
			[](uv_handle_t* handle)
		{
			LogicServer::GetInstance()->OnConnectionClose(handle);
		});
	}
}

void LogicServer::OnTimerClose(uv_handle_t* handle)
{
	active_timers.erase((uv_timer_t*)handle);
}

void LogicServer::OnConnectionClose(uv_handle_t* handle)
{
	fprintf(stdout, "Release connection of client...\r\n");
	auto connection_pos = open_sessions.find((uv_stream_t*)handle);
	if (connection_pos != open_sessions.end()) {
		delete connection_pos->second;
	}
	open_sessions.erase((uv_stream_t*)handle);
}