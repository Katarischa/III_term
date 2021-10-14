//
// Created by Marina on 13.10.2021.
//

#include "task_1.h"
#include <iostream>


smart_double &smart_double::operator=(smart_double&& smart) noexcept {
    if (&smart == this)
        return *this;

    delete smarty;

    smarty = smart.smarty;
    smart.smarty = nullptr;
    return *this;
}


double operator*(const smart_double &smart) {
    return *smart.smarty;
};

std::ostream &operator<<(std::ostream &out, const smart_double &smart) {
    out << smart.smarty;
    return out;
}

smart_double::smart_double(smart_double &&smart) noexcept {
    if (&smart == this)
        return;

    delete smarty;

    smarty = smart.smarty;
    smart.smarty = nullptr;
}

double smart_double::get_value() const {
    return *smarty;
}





