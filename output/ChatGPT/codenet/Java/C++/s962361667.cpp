#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int w, n;
    std::cin >> w >> n;
    std::vector<int> values(w);
    
    for (int i = 0; i < values.size(); i++) {
        values[i] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        int x = 0;
        std::string str;
        std::cin >> str;
        std::istringstream iss(str);
        std::string token;
        std::vector<std::string> ab;
        
        while (std::getline(iss, token, ',')) {
            ab.push_back(token);
        }
        
        int a = std::stoi(ab[0]) - 1;
        int b = std::stoi(ab[1]) - 1;
        x = values[a];
        values[a] = values[b];
        values[b] = x;
    }
    
    for (int i = 0; i < w; i++) {
        std::cout << values[i] << std::endl;
    }
    
    return 0;
}