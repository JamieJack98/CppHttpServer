cmake_minimum_required(VERSION 3.19)

set(LibName "CppHttpServer")

# Use C++17 or higher
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the Networking/Sockets module
add_subdirectory(Networking/Sockets)