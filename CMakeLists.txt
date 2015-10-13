cmake_minimum_required(VERSION 2.6.0)
link_directories (${CMAKE_SOURCE_DIR})

add_library (vision SHARED vision.cpp vision.hpp)

# commenting out this line breaks linking main...
target_link_libraries (vision -lcuda)

add_executable (main main.cpp)
target_link_libraries (main vision)

# ...unless this is uncommented
# target_link_libraries (main -lmycuda)
