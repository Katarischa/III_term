#include "task_2.h"
#include <iostream>
#include <vector>

int main() {

    Vector<int> a({2, 3, 4});
    Vector<int> b(3);
    Vector<int> c;

    std::vector<int> V = a.get_components();
    V[2] = 4.4;

    std::cout << V[2] << " " << a.get_components()[2] << std::endl;
    std::cout << a.abs() << std::endl;
}