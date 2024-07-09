#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    unordered_map<char, int> bought_count;
    for (char c : line) {
        bought_count[c]++;
    }
    getline(cin, line);
    unordered_map<char, int> made_count;
    for (char c : line) {
        made_count[c]++;
    }
    int res = 0;
    for (auto it : made_count) {
        char color = it.first;
        if (bought_count.find(color) == bought_count.end()) {
            cout << -1 << endl;
            return 0;
        }
        res += min(bought_count[color], made_count[color]);
    }
    cout << res << endl;
    return 0;
}