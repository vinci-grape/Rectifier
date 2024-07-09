#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> ls(n);
    for (int i = 0; i < n; i++) {
        std::cin >> ls[i];
    }

    std::map<std::string, int> c;
    for (const std::string& s : ls) {
        c[s]++;
    }

    int count = c.begin()->second;
    std::vector<std::string> ans;
    for (const auto& p : c) {
        if (p.second == count) {
            ans.push_back(p.first);
        } else {
            break;
        }
    }
    std::sort(ans.begin(), ans.end());

    for (const std::string& s : ans) {
        std::cout << s << std::endl;
    }

    return 0;
}