#ifndef III_TERM_TASK_2_OPERATION_H
#define III_TERM_TASK_2_OPERATION_H

#include <iostream>
#include <cmath>


class ZeroDivisionException : public std::exception {
public:
    const char *what() const noexcept override {
        return "Error: division by zero";
    }
};

class Fraction {
public:
    // constructor
    Fraction() = default;

    Fraction(int new_numerator, unsigned new_denominator) :
            numerator(new_numerator), denominator(new_denominator) {
        if (new_denominator == 0) {
            throw ZeroDivisionException();
        }
        simplify_fraction();
    }

    //operation of input-output
    friend std::istream &operator>>(std::istream &, Fraction &a);

    friend std::ostream &operator<<(std::ostream &, Fraction a);

    //operation (+, *, -, /)
    friend Fraction operator+(Fraction a, Fraction b);

    friend Fraction operator*(Fraction a, Fraction b);

    friend Fraction operator-(Fraction a, Fraction b);

    friend Fraction operator/(Fraction a, Fraction b);


    //assignment operators
    friend Fraction operator+=(Fraction a, Fraction b);

    friend Fraction operator*=(Fraction a, Fraction b);

    friend Fraction operator-=(Fraction a, Fraction b);

    friend Fraction operator/=(Fraction a, Fraction b);

    //decrements and increments
    Fraction &operator++();

    Fraction &operator--();

    Fraction operator++(int);

    Fraction operator--(int);

    //get and set
    int get_numerator() const {
        return numerator;
    }

    unsigned get_denominator() const {
        return denominator;
    }

    void set_numerator(int new_numerator) {
        numerator = new_numerator;
        simplify_fraction();
    }

    void set_denominator(unsigned new_denominator) {
        denominator = new_denominator;
        simplify_fraction();
    }

    //destructor
    ~Fraction() = default;

private:
    int numerator;
    unsigned denominator;

    // euclid algorithm
    unsigned gcd(int a, unsigned b) {
        if (b == 0) {
            return a;
        } else {
            return gcd(b, a % b);
        }
    };

    void simplify_fraction() {
        unsigned div = gcd(numerator, denominator);
        if (div != 1) {
            numerator /= div;
            denominator /= div;
        }
    };

    double go_to_double(Fraction a) {
        double a_double;
        a_double = a.numerator / a.denominator;
        return a_double;
    };

    void comparison_voice(Fraction a, Fraction b) {
        if (a.numerator * b.denominator > a.denominator * b.numerator) {
            std::cout << "First fraction more than the second" << std::endl;
            return;
        }
        if (a.numerator * b.denominator == a.denominator * b.numerator) {
            std::cout << "Fractions are equal" << std::endl;
            return;
        }
        if (a.numerator * b.denominator > a.denominator * b.numerator) {
            std::cout << "First fraction less than the second" << std::endl;
        }

    };
};


#endif //III_TERM_TASK_2_OPERATION_H
