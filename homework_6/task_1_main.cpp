#include <iostream>
#include "task_1.h"


int main( ){
smart_double a(12), b(4);
b = std::move(a);
    return 0;
}