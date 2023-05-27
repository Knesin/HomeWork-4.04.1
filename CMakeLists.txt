cmake_minimum_required(VERSION 3.22.0)
project(HomeWork-4.04.1)
add_subdirectory(../Catch2 Catch2-build)
add_executable(HomeWork HomeWork-4.04.1.cpp List.h List.cpp ListNode.h ListNode.cpp)
target_link_libraries(HomeWork PRIVATE Catch2::Catch2)

