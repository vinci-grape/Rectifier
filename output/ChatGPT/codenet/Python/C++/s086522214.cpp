#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    std::string delimiter = "/";
    size_t pos = 0;
    std::string token;

    while ((pos = S.find(delimiter)) != std::string::npos) {
        token = S.substr(0, pos);
        S.erase(0, pos + delimiter.length());
    }

    int date = std::stoi(S);

    if (date <= 430) {
        std::cout << "Heisei" << std::endl;
    } else {
        std::cout << "TBD" << std::endl;
    }


    return 0;
}