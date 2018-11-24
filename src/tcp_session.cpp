#include "tcp_session.h"

TCPSession::TCPSession()
{
	connection = (uv_tcp_t*)malloc(sizeof(uv_tcp_t));
	activity_timer = (uv_timer_t*)malloc(sizeof(uv_timer_t));
}

TCPSession::~TCPSession()
{
	printf("~TCPSession\r\n");
	free(connection);
	free(activity_timer);

	connection = NULL;
	activity_timer = NULL;
}