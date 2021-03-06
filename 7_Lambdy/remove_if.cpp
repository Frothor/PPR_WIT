#include <iostream>
#include <functional>
#include <vector>

std::vector<int>::iterator remove_if(std::vector<int>::iterator b, std::vector<int>::iterator e, std::function<bool(int)> predicate){
    for (auto it = b; it < e; ++it) {
        if (!predicate(*it)) {
            *b++ = *it;
        }
    }
    return b;
}

int main() {
    std::vector<int> vector {-7, 5, 2, 2, 11, 2, 3};
    auto result = remove_if(vector.begin(), vector.end(),
                            [](int element) {return element < 3; });
    for (auto iterator = vector.cbegin(); iterator < result;) {
        std::cout << *iterator++ << " ";
    }
    std::cout << std::endl;
}