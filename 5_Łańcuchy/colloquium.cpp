#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main(int argc, char *argv[]) {
    std::ifstream input(argv[1]);
    std::vector<double> points;
    std::vector<double> task_points_sum;
    int line_number = 1;
    int person_counter = 0;

    for(std::string line;std::getline(input, line); line_number++) {
        std::string word;
        if(line_number == 1){
            for(std::istringstream stream(line); stream >> word;){
                double point;
                if (std::istringstream(word) >> point) {
                    points.push_back(point);
                }
            }
            int num_of_tasks = points.size();
            for(int i=0; i< num_of_tasks; i++)
                task_points_sum.push_back(0);
        }
        else {
            double sum = 0;
            int i = -1;
            for(std::istringstream stream(line); stream >> word;i++){
                if(i == -1){
                    std::cout << word << " ";
                }
                else {
                    double point;
                    if (std::istringstream(word) >> point) {
                        sum += point;
                        task_points_sum[i] += point;
                    }
                }
            }
            person_counter++;
            std::cout << sum << "\n";
        }
    }
    int i = 1;
    for(double s: task_points_sum){
        std::cout << i << " " << s / person_counter << "\n";
        i++;
    }
}
