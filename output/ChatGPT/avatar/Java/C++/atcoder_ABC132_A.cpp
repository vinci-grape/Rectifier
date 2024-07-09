#include <iostream>
#include <unordered_map>

int main() {
    std::string s;
    std::cin >> s;
    std::unordered_map<char, int> map;
    
    for (int i = 0; i < s.length(); i++) {
        if (map.find(s[i]) == map.end()) {
            map[s[i]] = 1;
        } else {
            map[s[i]]++;
        }
    }
    
    bool ok = true;
    for (auto it = map.begin(); it != map.end(); it++) {
        if (it->second != 2) {
            ok = false;
            break;
        }
    }
    
    if (ok && map.size() == 2) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}