//
// Created by Marina on 14.11.2021.
//

#include "task_2.h"
#include <vector>
#include <cmath>
#include <iostream>
#include "Vector.cpp"


template<typename T>
void Vector::set_components(const std::vector<T> & new_components) {
    dimension = new_components.size();
    components = new_components;
}


void Vector::set_dimension(unsigned int new_dimension) {
    dimension = new_dimension;
    components.resize(dimension);

}

template<typename T>
const std::vector<T> &Vector::get_components() const {
    return components;
}


template<typename T>
T Vector::abs() {
    int sum;
    sum = 0;
    for (auto i = 0u; i < dimension; i++){
        components[i] *= components[i];
        sum += components[i];
    }
    return pow(sum, 0.5);
}

Vector operator*(Vector a, double lambda) {
    for (auto i = 0u; i < a.dimension; i++) {
        a.components[i] *= lambda;
    }
    return a;

}

template<typename T>
unsigned Vector::get_dimension() const {
    return dimension;
}

Vector operator*(double lambda, Vector a)  {
    return a * lambda;
}

Vector operator+(Vector a, Vector b) {
    if (a.dimension == b.dimension) {
        for (auto i = 0u; i < a.dimension; i++) {
            a.components[i] += b.components[i];
        }
        return a;
    }
    std::cout << "error" << std::endl;
}

Vector operator-(Vector b, Vector a) {
    if (a.dimension == b.dimension) {
        for (auto i = 0u; i < a.dimension; i++) {
            b.components[i] -= a.components[i];
        }
        return b;
    }
    std::cout << "error" << std::endl;
}

