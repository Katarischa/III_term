//
// Created by Marina on 20.10.2021.
//

#include "task_2_operation.h"

Fraction operator + (Fraction a, Fraction b) {
    Fraction c;
    c.denominator = a.denominator * b.denominator;
    c.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    c.simplify_fraction();
    return c;
}

Fraction operator*(Fraction a, Fraction b) {
    Fraction c;
    c.denominator = a.denominator * b.denominator;
    c.numerator = a.numerator * b.numerator;
    c.simplify_fraction();
    return c;
}

Fraction operator-(Fraction a, Fraction b) {
    Fraction c;
    c.denominator = a.denominator * b.denominator;
    c.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    c.simplify_fraction();
    return c;
}

Fraction operator/(Fraction a, Fraction b) {
    Fraction c;
    int num;
    num = (b.numerator / abs(b.numerator)) * b.denominator;
    unsigned den = abs(b.numerator);
    if (num != 0) {
        c.denominator = a.denominator * den;
        c.numerator = a.numerator * num;
        c.simplify_fraction();
    } else {std::cout << 'Error! Division by 0' << std::endl;}
    return c;
}

Fraction operator+=(Fraction a, Fraction b) {
    a = a + b;
    return a;
}

std::istream &operator>>(std::istream &in, Fraction a) {
    in >> a.numerator >> a.denominator;
    return in;
}

std::ostream &operator<<(std::ostream &out, Fraction a) {
    std::cout << a.numerator << '/' << a.denominator << std::endl;
    return out;
}

Fraction operator*=(Fraction a, Fraction b) {
    a = a * b;
    a.simplify_fraction();
    return a;
}

Fraction operator-=(Fraction a, Fraction b) {
    a = a - b;
    a.simplify_fraction();
    return a;
}

Fraction operator/=(Fraction a, Fraction b) {
    a = a / b;
    a.simplify_fraction();
    return a;
}

Fraction &Fraction::operator++() {
    numerator += int(denominator);
    return *this;
}

Fraction &Fraction::operator--() {
    numerator -= int(denominator);
    return *this;
}

Fraction Fraction::operator++(int) {
    Fraction temp(*this);
    numerator += int(denominator);
    return temp;
}

Fraction Fraction::operator--(int) {
    Fraction temp(*this);
    numerator -= int(denominator);
    return temp;
}

