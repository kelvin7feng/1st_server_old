#include "tcp_session.h"

TCPSession::TCPSession()
{
	connection = (uv_tcp_t*)malloc(sizeof(uv_tcp_t));
	AddRef();
	activity_timer = (uv_timer_t*)malloc(sizeof(uv_timer_t));
	AddRef();
}

TCPSession::~TCPSession()
{
	printf("~TCPSession\r\n");
	free(connection);
	free(activity_timer);

	connection = NULL;
	activity_timer = NULL;
}

void TCPSession::AddRef()
{
	refCount = refCount + 1;
}

void TCPSession::DelRef()
{
	refCount = refCount - 1;
}

bool TCPSession::CanRelease()
{
	if (refCount == 0) {
		return true;
	}
	else {
		return false;
	}
}