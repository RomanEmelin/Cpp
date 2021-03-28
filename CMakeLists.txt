cmake_minimum_required(VERSION 3.17)
project(Cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Cpp_00/ex01)

add_executable(Cpp
#        Cpp_00/ex00/megaphone.cpp
        Cpp_00/ex01/Contact.cpp
        Cpp_00/ex01/Contact.hpp
        Cpp_00/ex01/main.cpp
        Cpp_00/ex01/PhoneBook.cpp
        Cpp_00/ex01/PhoneBook.hpp)
