#ifdef _WIN32 
#include <vld.h>
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"Iphlpapi.lib")
#pragma comment(lib,"Psapi.lib")
#elif __linux__
#elif __APPLE__
#endif

#include <uv.h>
#include <map>

#include "tcp_session.h"

typedef std::map<uv_stream_t*, TCPSession*> session_map_t;
typedef std::map<uv_timer_t*, uv_stream_t*> timer_map_t;

class LogicServer
{
public:
	LogicServer();
	~LogicServer();

	LogicServer(const LogicServer& LogicServer);
	int Init(const char * ip, int port);
	static LogicServer* GetInstance();
	void Start();
	
	uv_loop_t* GetLoop();

	void AllocBuffer(uv_handle_t * handle, size_t suggested_size, uv_buf_t * buf);
	void OnMsgRecv(uv_stream_t *client, ssize_t nread, const uv_buf_t *buf);
	void OnClientTimeout(uv_timer_t * handle);
	void OnNewConnection(uv_stream_t *server, int status);
	void CloseHandlers();

	void RemoveClient(uv_stream_t * client);
	void OnTimerClose(uv_handle_t * handle);
	void OnConnectionClose(uv_handle_t * handle);

private:
	session_map_t open_sessions;
	timer_map_t active_timers;
	uv_tcp_t* server_handler;
	uv_loop_t* loop;
};

