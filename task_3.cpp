#include <iostream>
#include <cmath>

int main()
{
    double a, b, c, D, x_1, x_2;
    std::cout << "Enter coefficients of quadratic equation: ax^2+bx+c=0 " <<std:: endl;
    std::cin >> a >> b >> c;
    if (a != 0)
        {D = b*b - 4*a*c;
        if (D == 0)
            {x_1 = (-b + sqrt(D))/(2*a);
            std:: cout << x_1;}
        if (D > 0)
            {x_1 = (-b + sqrt(D))/(2*a);
             x_2 = (-b - sqrt(D))/(2*a);
            std:: cout << x_1 <<"  "<< x_2;}
        if (D < 0)
            {std::cout << "We haven't some solve(";}
        }
    if (a == 0) {
            if (b != 0)
            {x_1 = c / b;
            std::cout << x_1;}
        if (b == 0 && c == 0) { std::cout << "All x is solve"; }
        if (b == 0 && c != 0) { std::cout << "We haven't some solve("; }
    }



}