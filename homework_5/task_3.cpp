#include "task_3_physics.h"
#include <iostream>

int main(){
    Force gravitation;
    std::vector<double> tmp(3);
    for (auto i = 0u; i < 3; i++){
       std::cin >> tmp[i];
    }
    std::cout << std::endl;
    gravitation.set_force_in_N(tmp);
    tmp = gravitation.get_force_in_dyn();
    for (auto i = 0u; i < 3; i++){
        std::cout << tmp[i] <<std::endl;
    }
};
