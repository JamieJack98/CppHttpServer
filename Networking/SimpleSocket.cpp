#include "SimpleSocket.hpp"
#include <iostream>

CppHttpServer::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, unsigned long interface)
{
    // Address structure
    m_address.sin_family = domain;
    m_address.sin_port = htons(port); // Convert from host byte order to network byte order
    m_address.sin_addr.s_addr = htonl(interface);

    // Establish and test socket 
    m_sock = socket(domain, service, protocol);
    test_connection(m_sock);
}

void CppHttpServer::SimpleSocket::test_connection(int itemToTest)
{
    if(itemToTest < 0)
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

int CppHttpServer::SimpleSocket::getSock()
{
    return m_sock;
}

int CppHttpServer::SimpleSocket::getConnection()
{
    return m_connection;
}

sockaddr_in CppHttpServer::SimpleSocket::getAddress()
{
    return m_address;
}

void CppHttpServer::SimpleSocket::setConnection(int connection)
{
    m_connection = connection;
}
