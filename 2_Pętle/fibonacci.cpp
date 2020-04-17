#include <iostream>


int main() {
    int n, f1 = 0, f2 = 1, nextF = 0;

    std::cin >> n;

    if(n > 0){
        for (int i = 1; i <= n; ++i)
        {
            if(i == 1)
            {
                std::cout << f1 << " ";
                continue;
            }
            if(i == 2)
            {
                std::cout << f2 << " ";
                continue;
            }
            nextF = f1 + f2;
            f1 = f2;
            f2 = nextF;

            std::cout << nextF << " ";
        }
    }
}