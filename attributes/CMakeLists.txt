cmake_minimum_required(VERSION 3.5)

project(attributes)

set(CMAKE_C_FLAGS "-W -Wall -Wextra")

add_executable(${PROJECT_NAME}-aligned aligned.c)

add_executable(${PROJECT_NAME}-always_inline always_inline.c)

add_executable(${PROJECT_NAME}-const const.c)

add_executable(${PROJECT_NAME}-constructor constructor.c)

add_executable(${PROJECT_NAME}-deprecated deprecated.c)

add_executable(${PROJECT_NAME}-destructor destructor.c)

add_executable(${PROJECT_NAME}-format format.c)

add_executable(${PROJECT_NAME}-format_arg format_arg.c)

add_executable(${PROJECT_NAME}-malloc malloc.c)

add_executable(${PROJECT_NAME}-mode mode.c)

add_executable(${PROJECT_NAME}-noinline noinline.c)

add_executable(${PROJECT_NAME}-noreturn noreturn.c)

add_executable(${PROJECT_NAME}-packed packed.c)

add_executable(${PROJECT_NAME}-pure pure.c)

add_executable(${PROJECT_NAME}-section section.c)

add_executable(${PROJECT_NAME}-unused unused.c)