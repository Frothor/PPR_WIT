#include <iostream>
#include <vector>

std::vector<int>::iterator min_element(std::vector<int>::iterator b, std::vector<int>::iterator e){
    auto result = b;
    for (b++;  b < e; ++b) {
        if(*b < *result)
            result = b;
    }
    return result;
}

std::vector<int>::const_iterator min_element(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e){
    auto result = b;
    for (b++;  b < e; ++b) {
        if(*b < *result)
            result = b;
    }
    return result;
}

int main() {
    std::vector<int> vector {7, 5, 1, 12, 8};
    std::vector<int>::iterator result1 = min_element(vector.begin(), vector.end());
    std::vector<int>::const_iterator result2 = min_element(vector.cbegin(), vector.cend());
    std::cout << result1 - vector.begin() << " "
              << result2 - vector.cbegin() << std::endl;
}
