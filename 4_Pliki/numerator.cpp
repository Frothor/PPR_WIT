#include <fstream>

int main(int argc, char *argv[]) {
    std::ifstream input(argv[1]);
    std::ofstream  output(argv[2]);
    std::string line;
    int counter = 1;

    while (std::getline(input, line)) {
        output << counter++ << " " << line << "\n";
    }

    output.close();
    input.close();

    return 0;
}
