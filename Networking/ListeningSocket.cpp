#include "ListeningSocket.hpp"

CppHttpServer::ListeningSocket::ListeningSocket(
    int domain,
    int service,
    int protocol,
    int port,
    unsigned long interface,
    int backlog) : BindingSocket(domain, service, protocol, port, interface),
                   m_backlog(backlog)
{
    
}
