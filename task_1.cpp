#include <iostream>
#include <iomanip>

int main() {
    std::string name, true_false;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std:: cin >> true_false;
        if (true_false == "true")
                {hasCashback = true;}
        if (true_false == "false")
                {hasCashback = false;}
    std::cout << "Maximum storing temperature:";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';
    std::cout << "Price:";
    std::cout << std:: setfill('.') <<std:: setw(10) << std:: right << ".";
    std::cout << std:: setfill('0') <<std:: setw(6) << std:: right << std:: hex << std:: uppercase << price << std:: endl;
    std::cout << "Has cash-back:";
    std::cout <<std:: setfill('.') <<std:: setw(8) << std:: right << std:: boolalpha << hasCashback <<std:: endl;
    std::cout << "Max temperature:";
    std::cout <<std:: setfill('.') <<std:: setw(6) <<std:: right << std:: dec <<std:: showpos<< temperature <<std:: endl;

    return 0;
}