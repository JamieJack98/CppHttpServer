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

        /**
         * @brief pure virtual function to establish a connection with a socket
         * 
         * @param sock 
         * @param address 
         * @return int - error code
         */
        virtual int establish_connection(int sock, struct sockaddr_in address) = 0;

        /**
         * @brief test a connection or socket
         * 
         * @param itemToTest - socket or connection to be tested
         */
        void test_connection(int itemToTest);

        /**
         * @brief Get the Sock object
         * 
         * @return int - socket
         */
        int getSock();

        /**
         * @brief Get the Connection object
         * 
         * @return int - connection
         */
        int getConnection();

        /**
         * @brief Get the Address object
         * 
         * @return struct sockaddr_in 
         */
        struct sockaddr_in getAddress();

        /**
         * @brief Set the Connection object
         * 
         */
        void setConnection(int connection);
    
    private:
        int m_sock;
        int m_connection;
        struct sockaddr_in m_address;
    };
}

#endif 