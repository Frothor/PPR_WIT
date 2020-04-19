#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    int par = atoi(argv[1]);
    std::ifstream input(argv[2]);
    std::ofstream  output(argv[3]);
    int n = par < 0 ? 26 + (par%26)  : par%26;
    char c;

    while(input.get(c)){
        if (c >= 'a' && c <= 'z')
            c = 'a' + (c - 'a' + n) % 26;
        else if(c >= 'A' && c <= 'Z')
            c = 'A' + (c - 'A' + n) % 26;

        output << c;
    }

    output.close();
    input.close();
    return 0;
}
