#include <iostream>
#include <vector>
#include <map>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::map<int, std::vector<int>> map;

    for (int i = 0; i < k; i++) {
        int d;
        std::cin >> d;
        for (int j = 0; j < d; j++) {
            int person;
            std::cin >> person;

            if (map.find(person) == map.end()) {
                map[person] = std::vector<int>();
            }
            map[person].push_back(d);
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (map.find(i) == map.end()) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}