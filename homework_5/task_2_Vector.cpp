#include <vector>
#include "task_2_Vector.h"
#include <cmath>
#include <iostream>

const std::vector<double> &Vector::get_components() const {
    return components;
}

unsigned Vector::get_dimension() const {
    return dimension;
}

void Vector::set_components(const std::vector<double> & new_components) {
    dimension = new_components.size();
    components = new_components;
}

void Vector::set_dimension(unsigned int new_dimension) {
    dimension = new_dimension;
    components.resize(dimension);

}

double Vector::abs() {
    int sum;
    sum = 0;
    for (unsigned i = 0; i < dimension; i++){
        components[i] *= components[i];
        sum += components[i];
    }
    return pow(sum, 0.5);
}

Vector operator*(Vector a, double lambda) {
        for (unsigned i = 0; i < a.dimension; i++) {
            a.components[i] *= lambda;
        }
        return a;

}

Vector operator*(double lambda, Vector a)  {
    return a * lambda;
}

Vector operator+(Vector a, Vector b) {
    if (a.dimension == b.dimension) {
        for (unsigned i = 0; i < a.dimension; i++) {
            a.components[i] += b.components[i];
        }
        return a;
    }
    std::cout << "error" << std::endl;
}

Vector operator-(Vector b, Vector a) {
    if (a.dimension == b.dimension) {
        for (unsigned i = 0; i < a.dimension; i++) {
            b.components[i] -= a.components[i];
        }
        return b;
    }
    std::cout << "error" << std::endl;
}

}

