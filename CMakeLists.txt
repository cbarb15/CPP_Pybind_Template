cmake_minimum_required(VERSION 4.2)
project(PyBind_CPP_Side)

set(CMAKE_CXX_STANDARD 20)
set(PYBIND11_FINDPYTHON ON)
add_subdirectory(pybind11)

pybind11_add_module(math_module add.cpp main.cpp)
install(TARGETS math_module DESTINATION .)
add_executable(PyBind_CPP_Side main.cpp)
target_link_libraries(PyBind_CPP_Side PRIVATE pybind11::embed)