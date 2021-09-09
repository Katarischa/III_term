#include <iostream>

int main()
{
    double x, y;
    std::cout << "Enter some number" <<std:: endl;
    std::cin >> x >> y;
    x -= y;
    y += 2*x;
    x = y - 2*x ;
    y = (y+x)/2;
    std::cout << "New number is "<< x << ' ' << y <<std:: endl;
}