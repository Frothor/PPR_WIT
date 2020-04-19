#include <vector>
#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    char c;
    std::vector<int> v(26);
    for(int &e : v)
        e = 0;

    while (std::cin >> c) {
        if(isalpha(c)) {
            char tmp = islower(c) ? c : tolower(c);
            int index = tmp - 'a';
            v[index]++;
        }
    }

    std::cout << "\n";

    for(int e : v)
        std::cout << e << " ";

    return 0;
}
