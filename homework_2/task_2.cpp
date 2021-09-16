#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string &line, std::string &split_char) {
    int position_1 = 0, position_new;
    bool flag = true;
    std::vector<std::string> vec;
    std::string tmp_string;
    while (flag) {
        position_new = line.find(split_char, position_1);
        {
            if (position_new == std::string::npos) {
                vec.push_back(line.substr(position_1, position_new - position_1));
                flag = false;
            } else {
                tmp_string = line.substr(position_1, position_new - position_1);
                line.substr(position_1, position_new - position_1);
                position_1 = position_new + 1;
                if (tmp_string.length() > 0) {
                    vec.push_back(tmp_string);
                }
            }
        }
    }
    return vec;
}

int main() {
    std::string line;
    std::cout << "Enter string" << std::endl;
    std::getline(std::cin, line);
    std::string split_char;
    std::cout << "Enter separator" << std::endl;
    std::getline(std::cin, split_char);
    auto output = split(line, split_char);
    for (auto word: output) {
        std::cout << '"' << word << '"' << std::endl;
    }
}