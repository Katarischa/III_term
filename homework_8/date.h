//
// Created by Marina on 05.11.2021.
//

#ifndef III_TERM_DATE_H
#define III_TERM_DATE_H

#include <iostream>
#include <exception>

enum class Month {
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


class Date {
public:
    Date() = default;

    Date(int our_day, Month our_month, int our_year) :
            year(our_year), month(our_month), day(our_day) {
        if (our_year == 0){
            throw std::invalid_argument("Does not exist 0 year");
        }
        if (our_day > day_in_Month(our_month) or our_day <= 0) {
            throw std::invalid_argument("There are not so many days this month");
        }
    }

    friend std::istream &operator>>(std::istream &, Date &a);

    friend std::ostream &operator<<(std::ostream &, Date a);

    friend bool operator>(Date a, Date b);

    friend bool operator<(Date a, Date b);

    friend bool operator>=(Date a, Date b);

    friend bool operator<=(Date a, Date b);


    int get_year() const {
        return year;
    }

    Month get_month() const {
        return month;
    }

    unsigned get_day() const {
        return day;
    }

    static void void_comparison(Date a, Date b) {
        if (a.year != b.year) {
            a.year > b.year ? std::cout << a << std::endl : std::cout << b << std::endl;
        } else if (a.month != b.month) {
            a.month > b.month ? std::cout << a << std::endl : std::cout << b << std::endl;
        } else {
            a.day > b.day ? std::cout << a << std::endl : std::cout << b << std::endl;
        }
    }


    ~Date() = default;


private:
    unsigned day;
    int year;
    Month month;

    friend std::istream &operator>>(std::istream &, Month &a);

    unsigned day_in_Month(Month new_month) {
        switch (new_month) {
            case Month::JANUARY:
            case Month::MARCH:
            case Month::MAY:
            case Month::JULY:
            case Month::AUGUST:
            case Month::OCTOBER:
            case Month::DECEMBER:
                return 31;
            case Month::APRIL:
            case Month::JUNE:
            case Month::SEPTEMBER:
            case Month::NOVEMBER:
                return 30;
            case Month::FEBRUARY:
                return 28;
        }
    }

};

#endif //III_TERM_DATE_H