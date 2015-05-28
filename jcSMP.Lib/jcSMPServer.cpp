#include "stdafx.h"

#include "jcSMPServer.h"

using namespace jcSMPLib;

using namespace System::Net;
using namespace System::Net::Sockets;

bool jcSMPServer::StartServer() {
	Socket ^listener = gcnew Socket(SocketType::Raw, ProtocolType::Tcp);

	SocketPermission ^permission = gcnew SocketPermission(NetworkAccess::Accept, TransportType::Tcp, "", SocketPermission::AllPorts);

	return true;
}