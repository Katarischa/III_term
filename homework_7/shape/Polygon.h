//
// Created by Marina on 14.11.2021.
//

#ifndef DEFAULT_POLYGON_H
#define DEFAULT_POLYGON_H

#include "Shape.h"

class Shapes::Polygon : public Shape {
public:
    Polygon() = default;

    explicit Polygon(std::vector<std::array<double, 2>> vert) :
            vertices(std::move(vert)), dimension(vertices.size()) {}

    explicit Polygon(unsigned dim) : dimension(dim) {
        vertices.resize(dimension);
    }


    double get_perimeter() const override;

    double get_area() const override;

    void print_info() const override;


    virtual const std::vector<std::array<double, 2>> &get_vertices() const;

    unsigned get_dimension()  const;


    void set_vertices(std::vector<std::array<double, 2>> vert);

    void set_vertex(unsigned pos, std::array<double, 2> vert);

    void set_dimension(unsigned dim);

private:
    std::vector<std::array<double, 2>> vertices;
    unsigned dimension;
};


#endif //DEFAULT_POLYGON_H