#include <string>
#include <cctype>
#include <iostream>

std::string initials(const std::string &s){
    int n = s.length();
    std::string res;
    char p = '\n';
    for(int i=0; i < n; i++){
        if(std::isspace(p) &&  !std::isspace(s[i]))
            res += s[i];
        p = s[i];
    }
    return res;
}

int main() {
    std::cout << initials("John Fitzgerald Kennedy") << std::endl;
    std::cout << initials(std::string("andy warhol")) << std::endl; }
