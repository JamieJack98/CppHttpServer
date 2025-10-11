#ifndef LISTENING_SOCKET_H
#define LISTENING_SOCKET_H

#include "BindingSocket.hpp"

namespace CppHttpServer
{
class ListeningSocket : public BindingSocket
{
public:
    ListeningSocket(
        int domain,
        int service,
        int protocol,
        int port,
        unsigned long interface,
        int backlog
    );

    void startListening();

private:
    int m_backlog;

    int m_listening;
};
}

#endif