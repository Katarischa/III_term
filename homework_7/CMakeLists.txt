cmake_minimum_required(VERSION 3.2)
project(III_term)

set(CMAKE_CXX_STANDARD 20)

add_executable(shapes main.cpp
        shape/Shape.cpp shape/Shape.h
        shape/Ellipse.cpp shape/Ellipse.h
        shape/Triangle.cpp shape/Triangle.h
        shape/Polygon.cpp shape/Polygon.h
        Shapes.h)