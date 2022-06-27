cmake_minimum_required(VERSION 3.16)

project(Pong)

SET(SOURCES src/main.cpp src/Paddle.cpp)

add_executable(Pong ${SOURCES})

target_compile_options(Pong PRIVATE -g)

target_link_libraries(Pong sfml-graphics sfml-window sfml-system)