#include <iostream>

int fibonachi(int number) {
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    number = fibonachi(number - 1) + fibonachi(number - 2);
    return number;
}

int main() {
    int number;;
    std::cout << "Enter number" << std::endl;
    std::cin >> number;
    std::cout << fibonachi(number) << std::endl;

}

