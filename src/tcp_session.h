#pragma once
#include <uv.h>
#include <memory>

class TCPSession
{
public:
	TCPSession();
	~TCPSession();

	void AddRef();

	void DelRef();

	bool CanRelease();

	uv_tcp_t* connection;
	uv_timer_t* activity_timer;

	int refCount = 0;
};

