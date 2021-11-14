//
// Created by Marina on 13.11.2021.
//

#include <vector>
#include <iostream>

template<typename T>
void merge(std::vector<T> &B, int iBegin, int iMiddle, int iEnd, std::vector<T> &A) {
    int i = iBegin;
    int j = iMiddle;
    for (int k = iBegin; k < iEnd; k++) {
        if (i < iMiddle && (j >= iEnd || A.at(i) <= A.at(j))) {
            B.at(k) = A.at(i++);
        } else {
            B.at(k) = A.at(j++);
        }
    }
}

template<typename T>
void split_merge(std::vector<T> &B, int iBegin, int iEnd, std::vector<T> &A) {
    if (iEnd - iBegin <= 1) return;
    int iMiddle = (iEnd + iBegin) / 2;
    split_merge(A, iBegin, iMiddle, B);
    split_merge(A, iMiddle, iEnd, B);
    merge(B, iBegin, iMiddle, iEnd, A);
}

template<typename T>
void merge_sort(std::vector<T> &A) {
    std::vector<T> B = A;
    int n = A.size();
    split_merge(B, 0, n, A);
    A = B;
}

int main() {
    int n, k;
    std::string e;
    std::vector<int> arr;
    std::vector<std::string> arr_1;
    std::cout << "Enter length of array" << std::endl;
    std::cin >> n;
    std::cout << "Enter the array you want to sort " << std::endl;
    for (auto i = 0u; i < n; i++) {
        std::cin >> k;
        arr.push_back(k);
    }
    for (auto i = 0u; i < n; i++) {
        std:: cin >> e;
        arr_1.push_back(e);
    }
    merge_sort(arr);
    merge_sort(arr_1);
    for (auto elen: arr) {
        std::cout << elen << " ";
    }
    std::cout<<std::endl;
    for (auto elen: arr_1){
        std::cout << elen << " ";
    }
}

