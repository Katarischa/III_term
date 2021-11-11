//
// Created by Marina on 05.11.2021.
//

#include "date.h"

int main() {
//    Date j;
//    Month t;
//    std::cin >> t;
//    std::cin >> j;
    Date a(12, Month::FEBRUARY, 20);
    Date b(12, Month::FEBRUARY, 6);
    Date c(12, Month::MAY, 20);
    Date e(12, Month::FEBRUARY, 20);
    Date::void_comparison(a, b);
    Date::void_comparison(a, c);
    std::cout << (a > b) << std::endl;
    std::cout << (a > e) << std::endl;
    std::cout << (a >= e) << std::endl;
    std:: cout << a << std::endl;

    return 0;
}