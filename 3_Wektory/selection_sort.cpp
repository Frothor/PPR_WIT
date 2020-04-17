#include <iostream>
#include <vector>


void swapElements(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void printVector(std::vector<int> &v) {
    for(int e: v) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

void selectionSort(std::vector<int> &v) {
    int len = v.size();

    for (int i = 0; i < len - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < len; ++j) {
            if(v[j] < v[minIndex])
                minIndex = j;
        }

        swapElements(v[minIndex], v[i]);
        printVector(v);
    }
};

int main() {
    std::vector<int> v;
    for(int x; std::cin >> x;) {
        v.push_back(x);
    }

    selectionSort(v);

    printVector(v);
}