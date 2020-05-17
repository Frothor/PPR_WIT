#include <iostream>
#include <string>
#include <vector>

void swap(std::string &a, std::string &b) {
    std::string tmp = a;
    a = b;
    b = tmp;
}

int partition(std::vector<std::string> &v, int low, int high) {
    std::string pivot = v[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return (i + 1);
}


void quick_sort(std::vector<std::string> &v, int low, int high){
    if (low < high) {
        int pi = partition(v, low, high);

        quick_sort(v, low, pi - 1);

        quick_sort(v, pi + 1, high);
    }
}


int main() {
    std::vector<std::string> words;
    std::string s;

    while(std::cin >> s){
        words.push_back(s);
    }

    quick_sort(words, 0, words.size()-1);
    for(auto el: words)
        std::cout << el << " ";
    std::cout << "\n";
}
