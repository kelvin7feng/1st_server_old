#include "message.pb.h"
#include "logic_server.h"

int main(int argc, char* argv[]) {
	LogicServer *server = LogicServer::GetInstance();
	server->Init("0.0.0.0", 7000);
	server->Start();
	/*Message msg;
	msg.set_event_id(1);
	msg.set_data("hello world");
	std::string str;
	msg.SerializeToString(&str);

	google::protobuf::ShutdownProtobufLibrary();*/
	return 0;
}
