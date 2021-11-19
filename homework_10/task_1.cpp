#include <iostream>


template<typename T, typename... Types>
void do_function(T func, Types... args) {
    std::cout << (func)(args...) << std::endl;
}

template<typename T, typename... Types>
T sum(Types... term) {
    auto a = (term + ...);
    return a;
}


int main() {
    int (*f_1)(int, int, int) = sum;
    double (*f_2)(int, int, int, int) = sum;
    do_function(f_1, 4, 6, 13);
    do_function(f_2, 11, 5, 7, 8);
}