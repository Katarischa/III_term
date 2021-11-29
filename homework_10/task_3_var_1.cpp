//
// Created by Marina on 20.11.2021.
//

#include <iostream>

template<typename T, typename... Types>
unsigned size(unsigned sum, T first_argument, Types... arguments) {
    sum += sizeof(first_argument);
    if constexpr(sizeof...(arguments) > 0) {
        size(sum, arguments...);
    } else {
        return sum;
    }

}


int main() {
    unsigned int array_of_data;
    array_of_data = size(45, 2, 1, 2, "Hello,my dear friend)", '3', 2, 5);
    std::cout << array_of_data << std::endl;

    return 0;
}