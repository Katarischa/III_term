//
// Created by Marina on 20.11.2021.
//

#include <iostream>

//template<typename T, typename... Types>
//unsigned size(unsigned sum, T first_argument, Types... arguments) {
//    sum += sizeof(first_argument);
//    if constexpr(sizeof...(arguments) > 0) {
//        size(sum, arguments...);
//    }
//        return sum;
//    }
//

//template<typename T, typename... Types>
//unsigned Size1(T first_argument, Types... arguments) {
//    unsigned sum = 0;
//    sum += sizeof(first_argument);
//    if constexpr(sizeof...(arguments) > 0) {
//        Size1(first_argument, arguments...);
//    }
//    return sum;
//}

template<typename T, typename... Types>
unsigned Size1(unsigned sum, T first_argument, Types... arguments) {
    sum += sizeof(first_argument);
    if constexpr(sizeof...(arguments) > 0) {
        Size1(sum, arguments...);
    }
    else{
        return sum;
    }
}


int main() {
    unsigned int a;
    a = Size1(45, 1, 1, 2, "sd", 5);
    std::cout << a << std::endl;

    return 0;
}