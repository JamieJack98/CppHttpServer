#include "SimpleSocket.hpp"

CppHttpServer::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, unsigned long interface)
{
    // Address structure
    address.sin_family = domain;
    address.sin_port = htons(port); // Convert from host byte order to network byte order
    address.sin_addr.s_addr = htonl(interface);
    m_connection = socket(domain, service, protocol);
}