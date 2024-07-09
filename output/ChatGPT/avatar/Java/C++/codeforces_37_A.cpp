#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        map[val]++;
    }
    int max = INT_MIN;
    for (auto entry : map) {
        int value = entry.second;
        max = max(max, value);
    }
    cout << max << " " << map.size() << endl;
}