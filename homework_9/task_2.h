//
// Created by Marina on 14.11.2021.
//

#ifndef III_TERM_TASK_2_H
#define III_TERM_TASK_2_H


#include <cmath>
#include <iostream>
#include <vector>

template<typename T>
class Vector {
public:
    Vector() = default;


    Vector(const std::vector<T> &new_components, unsigned new_dimension) :
            components(new_components), dimension(new_dimension) {}


    Vector(const std::vector<T> &new_components) :
            components(new_components), dimension(new_components.size()) {}


    Vector(unsigned new_dimension) :
            components(new_dimension), dimension(new_dimension) {}

    T abs() {
        int sum;
        sum = 0;
        for (auto i = 0u; i < dimension; i++) {
            components[i] *= components[i];
            sum += components[i];
        }
        return pow(sum, 0.5);
    }

    friend Vector operator*(Vector a, double lambda) {

        for (auto i = 0u; i < a.dimension; i++) {
            a.components[i] *= lambda;
        }
        return a;
    }

    friend Vector operator*(double lambda, Vector a) {
        return a * lambda;
    }

    friend Vector operator+(Vector a, Vector b) {
        if (a.dimension == b.dimension) {
            for (auto i = 0u; i < a.dimension; i++) {
                a.components[i] += b.components[i];
            }
            return a;
        }
        std::cout << "error" << std::endl;
    }

    friend Vector operator-(Vector b, Vector a) {
        if (a.dimension == b.dimension) {
            for (auto i = 0u; i < a.dimension; i++) {
                b.components[i] -= a.components[i];
            }
            return b;
        }
        std::cout << "error" << std::endl;
    }

    const std::vector<T> &get_components() const {
        return components;
    }

    unsigned get_dimension() const {
        return dimension;
    }

    void set_dimension(unsigned new_dimension) {
        dimension = new_dimension;
        components.resize(dimension);
    }

    void set_components(const std::vector<T> &new_components) {
        dimension = new_components.size();
        components = new_components;
    }


private:

    std::vector<T> components;
    unsigned dimension;
};



#endif //III_TERM_TASK_2_H
