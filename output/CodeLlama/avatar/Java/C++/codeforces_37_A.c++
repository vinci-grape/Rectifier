#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> map;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        map[val] = map[val] + 1;
    }
    int max = INT_MIN;
    for (auto &entry : map) {
        int value = entry.second;
        max = max(max, value);
    }
    cout << max << " " << map.size() << endl;
    return 0;
}