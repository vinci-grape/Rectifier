#include <iostream>
#include <string>
#include <vector>

bool debug = false;

void log(std::string text) {
    if (debug) {
        std::cout << text << std::endl;
    }
}

std::vector<std::string> parse_input(std::string lines_as_string = "") {
    std::vector<std::string> lines;
    if (lines_as_string.empty()) {
        debug = false;
        std::string line;
        std::getline(std::cin, line);
        lines.push_back(line);
    } else {
        debug = true;
        size_t start = lines_as_string.find('\n') + 1;
        size_t end = lines_as_string.rfind('\n');
        std::string sub = lines_as_string.substr(start, end - start);
        size_t pos = 0;
        std::string token;
        while ((pos = sub.find(' ')) != std::string::npos) {
            token = sub.substr(0, pos);
            lines.push_back(token);
            sub.erase(0, pos + 1);
        }
        lines.push_back(sub);
    }
    std::vector<std::string> result;
    result.push_back(lines[0]);
    return result;
}

std::string solve(std::string c) {
    std::string a = "abcdefghijklmnopqrstuvwxyz";
    size_t i = a.find(c);
    return a.substr(i + 1);
}

int main() {
    std::vector<std::string> input = parse_input();
    std::string result = solve(input[0]);
    std::cout << result << std::endl;

    return 0;
}