//
// Created by Marina on 07.10.2021.
//

#include "task_3_physics.h"

Force::Force(const std::vector<double> &force) : force(force) {}

Force operator*(Force &a, double lambda) {
    for (auto i = 0u; i < 3; i++) {
        a.force[i] *= lambda;
    }
    return a;
}

const std::vector<double> &Force::get_force_in_N() const {
    return force;
}

 std::vector<double> Force::get_force_in_dyn() const {
    std::vector<double> tmp = force;
    for (auto &i: tmp){
        i *= N_to_dyn;
    }
        return tmp;
}

void Force::set_force_in_N(const std::vector<double> &new_force) {
    Force::force = new_force;
}

void Force::set_force_in_dyn(std::vector<double> new_force) {
    for (auto &i : new_force){
        i /= N_to_dyn;}

        Force::force = new_force;

    }

