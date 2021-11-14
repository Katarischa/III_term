//
// Created by Marina on 14.11.2021.
//

#ifndef DEFAULT_SHAPE_H
#define DEFAULT_SHAPE_H

#include <iostream>
#include <cmath>
#include <vector>
#include <array>

namespace Shapes {

    class Shape;

    class Polygon;

    class Ellipse;

    class Triangle;

    const double PI = 3.1415;

    static double length(std::array<double, 2> x1, std::array<double, 2> x2);
}

class Shapes::Shape {
public:
    Shape() = default;

    virtual double get_perimeter() const;

    virtual double get_area() const;

    virtual void print_info() const;

    virtual ~Shape() = default;

};

double Shapes::length(std::array<double, 2> x1, std::array<double, 2> x2) {
    return std::sqrt(pow(x1[0] - x2[0], 2) + pow(x1[1] - x2[1], 2));
}


#endif //DEFAULT_SHAPE_H