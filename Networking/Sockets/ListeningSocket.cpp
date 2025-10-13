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
    startListening();
    test_connection(m_listening);
}

void CppHttpServer::ListeningSocket::startListening()
{
    m_listening = listen(getConnection(), m_backlog);
}
