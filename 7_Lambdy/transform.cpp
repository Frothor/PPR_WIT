#include <iostream>
#include <functional>
#include <vector>

std::vector<int>::iterator transform(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e,
                    std::vector<int>::iterator it, std::function<int(int)> action){
        int count = 0;
        while(b<e){
            *it = action(*b);
            it++;
            b++;
        }
        return it;
}

int main() {
    const std::vector<int> vector1 {-7, 5, 1, 2, 11};
    std::vector<int> vector2(5);
    auto result = transform(vector1.cbegin(), vector1.cend(), vector2.begin(),
                            [](int element) {return element * element; });
    for (auto iterator = vector2.cbegin(); iterator < result;) {
        std::cout << *iterator++ << " ";
    }
    std::cout << std::endl;
}
