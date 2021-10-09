#include "task_4_error_1.h"
#include <iostream>


int main(){
    unsigned unit;
    Force gravitation;
    std::cout << "Choose unit (1-N, 2-dyn)"<<std:: endl;
    std::cin >> unit;
    std::vector<double> tmp(3);
    switch (unit) {
        case 1:             // Данные вводятся в Ньютонах
            for (auto i = 0u; i < 3; i++){
                std::cin >> tmp[i];}
            for (auto i = 0u; i < 3; i++){
                std::cout << tmp[i] << ' ';}
            std::cout << "N" << std::endl;
            gravitation.set_force_in_N(tmp);
            tmp = gravitation.get_force_in_dyn();
            for (auto i = 0u; i < 3; i++){
                std::cout << tmp[i] << ' ';}
            std::cout << "dyn" << std::endl;
            break;
        case 2:
            for (auto i = 0u; i < 3; i++){
                std::cin >> tmp[i];}
            for (auto i = 0u; i < 3; i++){
                std::cout << tmp[i] << ' ';}
            std::cout << "dyn" << std::endl;
            gravitation.set_force_in_dyn(tmp);
            tmp = gravitation.get_force_in_N();
            for (auto i = 0u; i < 3; i++){
                std::cout << tmp[i] << ' ';}
            std::cout << "N" << std::endl;
    }
    return 0;
}