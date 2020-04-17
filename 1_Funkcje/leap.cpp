#include <iostream>

bool leap(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int main() {
    std::cout << std::boolalpha << leap(2002) << std::endl;
}