#include "string"
#include "vector"
#include "iostream"

int main(){
//    UnsignedPointer pointer(5u);
//    auto another_poiner = pointer;
    std::string current;
    std::vector<std::string> lines;
    for(; std::cin >> current;) {
        lines.push_back(current);
        std::cout << *lines.rbegin() << std::endl;}
}



