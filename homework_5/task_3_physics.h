//
// Created by Marina on 07.10.2021.
//

#ifndef III_TERM_TASK_3_PHYSICS_H
#define III_TERM_TASK_3_PHYSICS_H

#include <vector>

class Force {
public:
    Force() = default;

    const std::vector<double> &get_force_in_N() const;

    const std::vector<double> &get_force_in_dyn() const;

    void set_force_in_N(const std::vector<double> &force);

private:
    std::vector<double> force = {0,0,0};
};


#endif //III_TERM_TASK_3_PHYSICS_H
