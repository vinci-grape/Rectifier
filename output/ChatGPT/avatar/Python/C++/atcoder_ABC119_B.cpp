#include <iostream>
#include <string>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<double> x(N);

    for (int i = 0; i < N; i++) {
        std::string input;
        std::cin >> input;

        if (input.find("JPY") != std::string::npos) {
            input = input.replace(input.find("JPY"), 3, "");
            x[i] = std::stod(input);
        } else if (input.find("BTC") != std::string::npos) {
            input = input.replace(input.find("BTC"), 3, "");
            x[i] = std::stod(input) * 380000.0;
        }
    }

    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += x[i];
    }

    std::cout << sum << std::endl;

    return 0;
}