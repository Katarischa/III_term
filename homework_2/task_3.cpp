#include <algorithm>
#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &list, int &n) {

    for (int i = 1; i < n; i++) {
        for (int j = i; (j > 0)
                        && (list.at(j) < list.at(j - 1)); j--) {
            std::swap(list.at(j), list.at(j - 1));
        }
    }
}

int main() {
    int n, tmp;
    std::vector<int> list;

    std::cout << "Enter the amount of numbers: ";
    std::cin >> n;
    std::cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        list.push_back(tmp);
    }

    insertion_sort(list, n);

    for (auto val: list) {
        std::cout << val << " ";
    }

    return 0;
}