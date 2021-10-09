//
// Created by Marina on 09.10.2021.
//

#ifndef III_TERM_TASK_4_ERROR_1_H
#define III_TERM_TASK_4_ERROR_1_H

#include <vector>
static const double N_to_dyn = 1e5;

class Force{
public:


    Force():force({0,0,0}){};

    Force(const std::vector<double> &force);

    const std::vector<double> &get_force_in_N() const;

    std::vector<double> get_force_in_dyn() const;

    void set_force_in_dyn( std::vector<double> new_force);

    void set_force_in_N(const std::vector<double> &new_force);

private:
    std::vector<double> force;
};




#endif //III_TERM_TASK_4_ERROR_1_H
