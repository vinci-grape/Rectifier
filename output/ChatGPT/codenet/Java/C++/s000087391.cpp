#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<int> result;
    std::string line;
    int n = -1;
    while (true) {
        std::getline(std::cin, line);
        n = std::stoi(line);
        if (n == 0) {
            break;
        }
        std::getline(std::cin, line);
        std::stringstream ss(line);
        std::vector<int> input(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            ss >> input[i];
            sum += input[i];
        }
        double avg = static_cast<double>(sum) / n;
        int num = 0;
        for (int i = 0; i < n; i++) {
            if (input[i] <= avg) {
                num++;
            }
        }
        result.push_back(num);
    }
    for (int i = 0; i < result.size(); i++) {
        if (result[i] == -1) {
            std::cout << "NONE" << std::endl;
        } else {
            std::cout << result[i] << std::endl;
        }
    }
    return 0;
}