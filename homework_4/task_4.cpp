#include <iostream>

enum class Month{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,

};

int main() {
    std::cout << "Enter month " << std::endl;
    Month month;
    int day_in_month;
    std::cin >> day_in_month;
    month = static_cast<Month>(day_in_month);
    switch (month) {
        case Month::JANUARY:
        case Month::MARCH:
        case Month::MAY:
        case Month::JULY:
        case Month::AUGUST:
        case Month::OCTOBER:
        case Month::DECEMBER:
            std::cout << "There are 31 days!" << std::endl;
            break;
        case Month::APRIL:
        case Month::JUNE:
        case Month::SEPTEMBER:
        case Month::NOVEMBER:
            std::cout << "There are 30 days!" << std::endl;
            break;
        case Month::FEBRUARY:
            std::cout << "There are 28 or 29 days!" << std::endl;
            break;
        default:
            std::cout << "There are only 12 month, error" << std::endl;

    }
    return 0;
}