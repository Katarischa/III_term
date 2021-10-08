//
// Created by Marina on 07.10.2021.
//

#include "task_3_physics.h"

std::vector<double> operator*(std::vector<double>a, double lambda){
    for (unsigned i = 0u; i < a.size(); i++){
        a[i] *= lambda;
    }
    return a;
}

const std::vector<double> &Force::get_force_in_N() const {
    return force;
}

const std::vector<double> &Force::get_force_in_dyn() const {
    return force * 10e5;
}

void Force::set_force_in_N(const std::vector<double> &force) {
    Force::force = force;
}
