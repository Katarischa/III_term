//
// Created by Marina on 05.11.2021.
//

#include "date.h"

std::istream &operator>>(std::istream &in, Month &month) {
    int month_number;
    in >> month_number;
    month = Month(month_number);
    return in;
}

std::istream &operator>>(std::istream &in, Date &a) {
    in >> a.day >> a.month >> a.year;
//    int month_number;
//    in >> month_number;
//    a.month = Month(month_number);
    return in;
}

std::ostream &operator<<(std::ostream &out, const Month &month) {
    out << static_cast<int>(month);
    return out;
}

std::ostream &operator<<(std::ostream &out, const Date a) {
    out << a.day << " day " << a.month << " month " << a.year <<" year "<< std::endl;
    return out;
}

bool operator>(Date a, Date b) {
    if (a.year != b.year) {
        return a.year > b.year;
    } else if (a.month != b.month) {
        return a.month > b.month;
    } else {
        return a.day > b.day;
    }
}

bool operator<(Date a, Date b) {
    if (a.year != b.year) {
        return a.year < b.year;
    } else if (a.month != b.month) {
        return a.month < b.month;
    } else {
        return a.day < b.day;
    }
}

bool operator>=(Date a, Date b) {
    if (a.year != b.year) {
        return a.year >= b.year;
    } else if (a.month != b.month) {
        return a.month >= b.month;
    } else if (a.day == b.day){
        return a.day >= b.day;
    }

}

bool operator<=(Date a, Date b) {
    if (a.year != b.year) {
        return a.year <= b.year;
    } else if (a.month != b.month) {
        return a.month <= b.month;
    } else if (a.day == b.day) {
        return a.day <= b.day;
    }
}