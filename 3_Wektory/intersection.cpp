#include <iostream>
#include <vector>

std::vector<int> intersection(const std::vector<int> &vector1, const std::vector<int> &vector2) {

    std::vector<int> result;
    int left_end = vector1.size();
    int right_end = vector2.size();
    int left = 0, right = 0;

    while (left != left_end && right != right_end) {

        if (vector1[left] == vector2[right]) {
            result.push_back(vector1[left]);
            ++left;
            ++right;
            continue;
        }

        if (vector1[left] < vector2[right]) {
            ++left;
            continue;
        }

        if (vector1[left] > vector2[right])
            ++right;
    }

    return result;
}

int main() {
    for (int element: intersection(std::vector<int>{-7, 2, 3, 7, 15, 18, 23},
                                   std::vector<int>{-8, 3, 5, 8, 15, 23, 30})) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}