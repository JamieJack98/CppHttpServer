# Create a library target for the Sockets module
add_library(Sockets)

# Set include directories for the library
target_include_directories(Sockets
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Public
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Private
)

# Collect all source and header files
file(GLOB_RECURSE SOCKETS_PUBLIC_HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/Public/*.hpp"
)
file(GLOB_RECURSE SOCKETS_PRIVATE_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/Private/*.cpp"
)

# Add sources to the library
target_sources(Sockets
    PRIVATE
        ${SOCKETS_PRIVATE_SOURCES}
        ${SOCKETS_PUBLIC_HEADERS}
)
