#include "ConnectingSocket.hpp"

CppHttpServer::ConnectingSocket::ConnectingSocket(
    int domain,
    int service,
    int protocol,
    int port,
    unsigned long interface
    ) : SimpleSocket(domain, service, protocol, port, interface)
{
    // Establish and test socket
    setConnection(establish_connection(getSock(), getAddress()));
    test_connection(getConnection());
}

int CppHttpServer::ConnectingSocket::establish_connection(int sock, sockaddr_in address)
{
    return bind(sock, (struct sockaddr *)& address, sizeof(address));
}

