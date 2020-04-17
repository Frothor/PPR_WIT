#include <iostream>

int main() {
    double min, val;
    bool first = 1;

    while (std::cin >> val) {

        if(first)
        {
            min = val;
            first = 0;
        }
        else if (val < min)
            min = val;
    };

    if(!first)
    {
        std::cout << min;
    }
}