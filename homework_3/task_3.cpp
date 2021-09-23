#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    int n, k;
    bool true_false;
    std::vector<int> arr;
    std::cout << "Enter the length of the array" << std::endl;
    std::cin >> n;
    std::cout << "Enter the array you want to sort " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        arr.push_back(k);
    }
    std::cout << "If you need to sort the array in ascending order, enter 1, if descending - 0" << std::endl;
    std::cin >> true_false;
    if (true_false) {
        auto sort_in = [](std::vector<int> &vec) {
            std::sort(vec.begin(), vec.end());
        };
        sort_in(arr);
    } else {
        auto sort_de = [](std::vector<int> &vec) {
            std::sort(vec.begin(), vec.end(), [](int a, int b) {
                return a > b;
            });
        };
        sort_de(arr);
    }


    for (auto p: arr) {
        std::cout << p << ' ';
    }
}


