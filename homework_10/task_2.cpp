#include <iostream>
#include <vector>


template<typename T, typename... Types>
T *ptr_dynamic_function(Types... args) {
    return new T(args...);
};


int main() {
    auto a = ptr_dynamic_function<std::vector<double>, double, int >(12.34, 5);
    std::cout << a << std::endl;

}