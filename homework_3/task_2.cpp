#include <vector>
#include <iostream>

void merge(std::vector<int> &B, int iBegin, int iMiddle, int iEnd, std::vector<int> &A) {
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

void split_merge(std::vector<int> &B, int iBegin, int iEnd, std::vector<int> &A) {
    if (iEnd - iBegin <= 1) return;
    int iMiddle = (iEnd + iBegin) / 2;
    split_merge(A, iBegin, iMiddle, B);
    split_merge(A, iMiddle, iEnd, B);
    merge(B, iBegin, iMiddle, iEnd, A);
}

void merge_sort(std::vector<int> &A) {
    std::vector<int> B = A;
    int n = A.size();
    split_merge(B, 0, n, A);
    A = B;
}

int main() {
    int n, k;
    std::vector<int> arr;
    std::cout << "Enter length of array" << std::endl;
    std::cin >> n;
    std::cout << "Enter the array you want to sort " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        arr.push_back(k);
    }
    merge_sort(arr);
    for (auto elen: arr) {
        std::cout << elen << " ";
    }
}

