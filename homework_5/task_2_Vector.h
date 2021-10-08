
#ifndef III_TERM_TASK_1_H
#define III_TERM_TASK_1_H

#include <vector>


class Vector {
public:
    Vector() = default;

    Vector(const std::vector<double> &new_components, unsigned new_dimension) :
            components(new_components), dimension(new_dimension) {}


    Vector(const std::vector<double> &new_components) :
            components(new_components), dimension(new_components.size()) {}


    Vector(unsigned new_dimension) :
            components(new_dimension), dimension(new_dimension) {}

    double abs();

    friend Vector operator*(Vector a, double lambda);

    friend Vector operator*(double lambda, Vector a);

    friend Vector operator+(Vector a, Vector b);

    friend Vector operator-(Vector b, Vector a);


    const std::vector<double> &get_components() const;

    unsigned get_dimension() const;

    void set_dimension(unsigned dimension);

    void set_components(const std::vector<double> &components);

private:
    std::vector<double> components;
    unsigned dimension;
};


#endif //III_TERM_TASK_1_H
