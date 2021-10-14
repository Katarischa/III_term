#include <iostream>
#include "task_1.h"


int main( ){
smart_double a(12), b(4);
std:: cout << *a << *b << std::endl;
b = std::move(a);
std:: cout << b << ' ' << a << ' ' << b.get_value() <<' '<< *b << std::endl;
    return 0;
}