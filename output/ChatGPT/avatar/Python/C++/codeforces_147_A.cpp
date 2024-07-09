#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::vector<std::string> res;
    std::string punctuation = ",.!?";
    
    for (int i = 0; i < s.length(); i++) {
        if (i >= 1) {
            if (s[i] == ' ') {
                if (res.back() != "") {
                    res.push_back(std::string(1, s[i]));
                } else {
                    continue;
                }
            } else {
                if (punctuation.find(s[i]) != std::string::npos) {
                    if (res.back() == "") {
                        res.pop_back();
                    }
                    res.push_back(std::string(1, s[i]));
                    res.push_back("");
                } else {
                    res.push_back(std::string(1, s[i]));
                }
            }
        } else {
            if (s[i] == ' ') {
                continue;
            }
            if (punctuation.find(s[i]) != std::string::npos) {
                continue;
            } else {
                res.push_back(std::string(1, s[i]));
            }
        }
    }
    
    for (const auto& str : res) {
        std::cout << str;
    }
    
    return 0;
}