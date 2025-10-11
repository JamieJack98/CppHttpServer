#ifndef CONNECTING_SOCKET_H
#define CONNECTING_SOCKET_H

#include "SimpleSocket.hpp"

namespace CppHttpServer
{
class ConnectingSocket : public SimpleSocket
{
public:
    ConnectingSocket(
        int domain,
        int service,
        int protocol,
        int port,
        unsigned long interface
    );

    int establish_connection(int sock, struct sockaddr_in address) final;
};
}


#endif