#include <iostream>
#include <cstdlib>
#include <ctime>

bool coin(double headsProbability) {
    return std::rand()%100 < (headsProbability * 100);
}

int main() {
    std::srand(std::time(nullptr));
    for (int counter = 0; counter < 100; ++counter) {
        std::cout << (coin(0.99) ? "heads" : "tails") << " "; }
    std::cout << std::endl; }