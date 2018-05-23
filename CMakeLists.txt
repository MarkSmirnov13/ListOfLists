cmake_minimum_required(VERSION 3.8)
project(ListOfLists)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Base.h DoubleLinkedList.h DoubleLinkedList.cpp ListOfLists.h ListOfLists.cpp Parser.cpp RingDoubleLinkedList.h RingDoubleLinkedList.cpp RingSimplyLinkedList.h RingSimplyLinkedList.cpp SimplyLinkedList.h SimplyLinkedList.cpp)
add_executable(ListOfLists ${SOURCE_FILES})