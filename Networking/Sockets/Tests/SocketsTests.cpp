#include "ListeningSocket.hpp"
#include <iostream>

int main()
{
    // TODO: Create CMakeLists.txt file
    std::cout << "Starting..." << std::endl;
    //CppHttpServer::SimpleSocket ss = CppHttpServer::SimpleSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);

    std::cout << "BindingSocket..." << std::endl;
    CppHttpServer::BindingSocket bs = CppHttpServer::BindingSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);

    std::cout << "ListeningSocket..." << std::endl;
    CppHttpServer::ListeningSocket ls = CppHttpServer::ListeningSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10);

    std::cout << "Success!" << std::endl;
}