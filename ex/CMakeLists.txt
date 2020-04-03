cmake_minimum_required(VERSION 3.5)

project(exercices)

set(CMAKE_C_FLAGS "-W -Wall -Wextra ")

add_executable(${PROJECT_NAME}-01 ex01.c)

add_executable(${PROJECT_NAME}-02 ex02.c)

add_executable(${PROJECT_NAME}-03 ex03.c)

add_executable(${PROJECT_NAME}-04 ex04.c)

add_executable(${PROJECT_NAME}-05 ex05.c)