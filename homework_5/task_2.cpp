#include "task_2_Vector.h"
#include <iostream>
#include <vector>

int main() {
    Vector a({2, 3, 4});
    Vector b(3);
    Vector c;

    std::vector<double> V = a.get_components();
    V[2] = 4.4;

    std::cout << V[2] << " " << a.get_components()[2] << std::endl;
    std::cout << a.abs() << std::endl;
}