#pragma once
#include <uv.h>
#include <memory>

class TCPSession
{
public:
	TCPSession();
	~TCPSession();

	uv_tcp_t* connection;
	uv_timer_t* activity_timer;
};

