#include <iostream>

double lesser(double a, double b)
{
    return a > b ? b : a;
}

int main() {
    std::cout << lesser(3.12, 2.13) << std::endl;
}