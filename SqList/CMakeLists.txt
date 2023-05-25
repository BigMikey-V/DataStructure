cmake_minimum_required(VERSION 3.21)
project(SqList C)

set(CMAKE_C_STANDARD 23)

add_executable(SqList main.c sqlist.c sqlist.h)
