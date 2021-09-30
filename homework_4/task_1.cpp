#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

struct Vect {
    unsigned dim;
    std::vector<double> components;
};


Vect operator*(Vect a, double lambda) {
    for (unsigned i = 0; i < a.dim; i++) {
        a.components[i] *= lambda;
    }
    return a;
}


Vect operator*(double lambda, Vect a) {
    return a * lambda;
}


Vect operator+(Vect a, Vect b) {
    if (a.dim == b.dim) {
        for (unsigned i = 0; i < a.dim; i++) {
            a.components[i] += b.components[i];
        }
        return a;
    }
    std::cout << "error" << std::endl;

}


Vect operator-(Vect b, Vect a) {
    if (a.dim == b.dim) {
        for (unsigned i = 0; i < a.dim; i++) {
            b.components[i] -= a.components[i];
        }
        return b;
    }
    std::cout << "error" << std::endl;
}


Vect operator-(Vect a) {
    for (unsigned i = 0; i < a.dim; i++) {
        a.components[i] = -a.components[i];
    }
    return a;
}


Vect operator*(Vect a, Vect b) {
    if (a.dim == b.dim) {
        for (unsigned i = 0; i < a.dim; i++) {
            a.components[i] *= b.components[i];
        }
        return a;
    }
    std::cout << "error" << std::endl;

}


std::ostream& operator<<(std::ostream &ostr, const Vect& a) {
    ostr << "[";
    for (unsigned i = 0; i < a.dim; i++) {
        ostr << a.components[i];
        if (i != a.dim - 1) ostr << ", ";
    }
    ostr << "]";
    return ostr;
}

std::istream& operator>>(std::istream& in, Vect& a) {
    std::cin >> a.dim;
    a.components.resize(a.dim);
    for (auto& elem : a.components) {
        std::cin >> elem;
    }
    return in;
}


double abs(Vect a){
    int sum;
    sum = 0;
    for (unsigned i = 0; i < a.dim; i++){
        a.components[i] *= a.components[i];
        sum += a.components[i];
    }
    return pow(sum, 0.5);
}


int main() {
    Vect a, b, c;
    double lambda;
    std:: cin >> lambda >> a >> b >> c;
    std:: cout << lambda * a <<" "<< b * lambda <<" "<< a + b <<" "<< a * b + c <<" "<< a - c <<" " << -a<<' '<<abs(a) << std:: endl;

}