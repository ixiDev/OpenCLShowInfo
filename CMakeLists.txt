cmake_minimum_required(VERSION 3.20)
project(OpenCLShowInfo)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCL REQUIRED)
include_directories(${OPENCL_INCLUDE_DIR})

add_executable(OpenCLShowInfo main.cpp)

target_link_libraries(OpenCLShowInfo OpenCL::OpenCL)
