cmake_minimum_required(VERSION 3.5)

project(keywords)

set(CMAKE_C_FLAGS "-W -Wall -Wextra")

add_executable(${PROJECT_NAME}-auto auto.c)

add_executable(${PROJECT_NAME}-const const.c)

add_executable(${PROJECT_NAME}-extern extern.c)

add_executable(${PROJECT_NAME}-inline inline.c)

add_executable(${PROJECT_NAME}-register register.c)

add_executable(${PROJECT_NAME}-restrict restrict.c)

add_executable(${PROJECT_NAME}-union union.c)

add_executable(${PROJECT_NAME}-volatile volatile.c)

add_executable(${PROJECT_NAME}-system-alignas system/_Alignas.c)

add_executable(${PROJECT_NAME}-system-alignof system/_Alignof.c)

add_executable(${PROJECT_NAME}-system-atomic system/_Atomic.c)

add_executable(${PROJECT_NAME}-system-bool system/_Bool.c)

add_executable(${PROJECT_NAME}-system-complex system/_Complex.c)

add_executable(${PROJECT_NAME}-system-generic system/_Generic.c)

add_executable(${PROJECT_NAME}-system-imaginary system/_Imaginary.c)

add_executable(${PROJECT_NAME}-system-noreturn system/_Noreturn.c)

add_executable(${PROJECT_NAME}-system-static-assert system/_Static_assert.c)













