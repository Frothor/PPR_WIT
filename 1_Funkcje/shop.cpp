#include <iostream>

bool isShopOpen(int hours, int minutes)
{
    return hours > 10 && hours < 18 || ((minutes >= 30 && hours == 10) || (minutes < 30 && hours == 18));
}

int main()
{
    int hours, minutes;
    std::cin >> hours >> minutes;
    std::cout << std::boolalpha << isShopOpen(hours, minutes);
}