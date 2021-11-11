cmake_minimum_required(VERSION 3.2)
project(III_term)

set(CMAKE_CXX_STANDARD 20)

add_executable(date task_2_date.cpp date.cpp date.h)
add_executable(task_2 task_2_fraction.cpp task_2_operation.cpp task_2_operation.h)