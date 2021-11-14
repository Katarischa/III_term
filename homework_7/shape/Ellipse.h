//
// Created by Marina on 14.11.2021.
//

#ifndef III_TERM_ELLIPSE_H
#define III_TERM_ELLIPSE_H


#ifndef DEFAULT_ELLIPSE_H
#define DEFAULT_ELLIPSE_H

#include "Shape.h"

class Shapes::Ellipse : public Shape {
public:
    Ellipse() = default;

    Ellipse(double a, double b) :
            center({0, 0}), a_axis(a), b_axis(b) {}

    Ellipse(double a, double b, std::array<double, 2> center) :
            center(center), a_axis(a), b_axis(b) {}

    double get_perimeter() const override;

    double get_area() const override;

    void print_info() const override;


    double get_a_axis() const;

    double get_b_axis() const;

    virtual std::array<double, 2> get_center() const;


    void set_a_axis(double a);

    void set_b_axis(double b);

    void set_axes(double a, double b);

    virtual void set_center(std::array<double, 2> c);

private:
    std::array<double, 2> center;
    double a_axis;
    double b_axis;
};


#endif //DEFAULT_ELLIPSE_H


#endif //III_TERM_ELLIPSE_H
