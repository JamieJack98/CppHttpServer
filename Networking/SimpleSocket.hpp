#ifndef SIMPLE_SOCKET_HPP
#define SIMPLE_SOCKET_HPP

#include <sys/socket.h>
#include <netinet/in.h>

namespace CppHttpServer
{
    class SimpleSocket
    {
    public:
        SimpleSocket(int domain, int service, int protocol, int port, unsigned long interface);

        struct sockaddr_in address;
    
    private:
        int m_connection;
    };
}

#endif 