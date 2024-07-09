#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::map<std::string, int> arr;

    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;

        if (arr.find(s) == arr.end()) {
            arr[s] = 1;
        } else {
            arr[s] += 1;
        }
    }

    int max_count = 0;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        max_count = std::max(max_count, it->second);
    }

    std::vector<std::string> dic;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (it->second == max_count) {
            dic.push_back(it->first);
        }
    }

    std::sort(dic.begin(), dic.end());

    for (auto it = dic.begin(); it != dic.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}