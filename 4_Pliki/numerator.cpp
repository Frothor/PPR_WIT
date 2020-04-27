#include <fstream>

int main(int argc, char *argv[]) {
    std::ifstream input(argv[1]);
    std::ofstream  output(argv[2]);
    int counter = 1;

    for(char p = '\n', c; input.get(c); p = c){
        if(p == '\n')
            output << counter++ << " " << c;
        else
            output << c;
    }

    output.close();
    input.close();
    return 0;
}
