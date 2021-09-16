#include <iostream>
#include <vector>

int bin_search(std::vector<int> &vec, int &vec_len, int &number) {
    unsigned int right, left, middle;
    left = 0;
    right = vec_len - 1;
    bool number_found = false;


    while (not number_found && left!= right) {
        middle = (left + right) / 2;
        if (vec.at(middle) == number) {
            number_found = true;
            right = left = middle;
        } else if (number < vec.at(middle)) {
            right = middle - 1;
        } else if (vec.at(middle) < number) {
            left = middle + 1;
        }
    }
    if(middle = right){
        number_found = true;
    }
    if (number_found) {
        return middle;
    } else {
        return -1;
    }
}

int main() {
    int vec_len, number, tmp, pos;
    std::cout << "Enter length of vector" << std::endl;
    std::cin >> vec_len;
    std::vector<int> vec;
    std::cout << "Enter vector" << std::endl;
    for (int i = 0; i < vec_len; i++) {
        std::cin >> tmp;
        vec.push_back(tmp);
    }
    std::cout << "Enter a number" << std::endl;
    std::cin >> number;
    pos = bin_search(vec, vec_len, number);
    std:: cout << "Position is: " << pos;
}