#include "logic_server.h"

int main(int argc, char* argv[]) {
	LogicServer *server = LogicServer::GetInstance();
	server->Init("0.0.0.0", 7000);
	server->Start();
	return 0;
}
