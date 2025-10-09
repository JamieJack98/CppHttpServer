#ifndef BINDING_SOCKET_HPP
#define BINDING_SOCKET_HPP

#include "SimpleSocket.hpp"

namespace CppHttpServer
{

class BindingSocket : public SimpleSocket 
{
public:
    BindingSocket(
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