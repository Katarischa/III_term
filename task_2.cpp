#include <iostream>

#define c 2.9e10
# define SI_length 10e-2
#define SI_charge c*10e-1
#define SI_inductance 1/(c*c)*10e-9

int main() {
    int mode_working;
    double x;
    std::string phys_quantity;
    std::cout << "Hello in unit converter" << "\n"
              << "Choose operating mode:enter '1' for SGS --> SI, enter '2' for SI --> SGS" << std::endl;
    std::cin >> mode_working;
    std::cout << "Choose physical quantity (length, charge, inductance):" << std::endl;
    std::cin >> phys_quantity;
    std::cout << "Enter variable value:" << std::endl;
    std::cin >> x;
    switch (mode_working) {
        case 1: {
            if (phys_quantity == "length") { x *= SI_length; }
            if (phys_quantity == "charge") { x *= SI_charge; }
            if (phys_quantity == "inductance") { x *= SI_inductance; }
            else
                std::cout << "incorrect entry" <<std:: endl;
            break;
        }
        case 2: {
            if (phys_quantity == "length") { x /= SI_length; }
            if (phys_quantity == "charge") { x /= SI_charge; }
            if (phys_quantity == "inductance") { x /= SI_inductance; }
            else
                std::cout << "incorrect entry" << std:: endl;
            break;
        }

    }
    std::cout << "Your new value is: " << x << std::endl;
}