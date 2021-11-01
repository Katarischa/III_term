//
// Created by Marina on 20.10.2021.
//
#include <iostream>
#include "task_2_operation.h"

int main() {
    Fraction a, b, c;
    std::cin >> a >> b >> c;
    a = b * c;
    b /= c;
    std::cout << a << b << std::endl;
    a++;
    b.set_denominator(5);
    std::cout << b << std::endl;

    return 0;
};