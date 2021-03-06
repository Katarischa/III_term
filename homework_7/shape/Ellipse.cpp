//
// Created by Marina on 14.11.2021.
//

#include "Ellipse.h"

using namespace Shapes;

double Ellipse::get_perimeter() const {
    double lambda2 = std::pow((a_axis - b_axis) / (a_axis + b_axis), 2);
    return PI * (a_axis + b_axis) * (1 + 3 * lambda2 / (10 + std::sqrt(4 - 3 * lambda2)));
}

double Ellipse::get_area() const {
    return PI * a_axis * b_axis;
}

void Ellipse::print_info() const {
    std::cout << "Ellipse shape with:\nmajor axis = " << std::max(a_axis, b_axis) << "\nminor axis = "
              << std::min(a_axis, b_axis) << "\ncenter point: " << center[0] << " " << center[1] << std::endl;
}

double Ellipse::get_a_axis() const {
    return a_axis;
}

double Ellipse::get_b_axis() const {
    return b_axis;
}

std::array<double, 2> Ellipse::get_center() const {
    return center;
}

void Ellipse::set_a_axis(double a) {
    a_axis = a;
}

void Ellipse::set_b_axis(double b) {
    b_axis = b;
}

void Ellipse::set_center(std::array<double, 2> c) {
    center = c;
}

void Ellipse::set_axes(double a, double b) {
    a_axis = a;
    b_axis = b;
}