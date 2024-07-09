#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ara(n);
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        ara[i] = v;

        if (map.find(v) == map.end()) {
            map[v] = 1;
        } else {
            map[v]++;
        }
    }

    int max = 0;
    for (auto i : map) {
        max = max(max, i.second);
    }

    unordered_map<int, int> mm;
    for (int i = 0; i < n; i++) {
        if (mm.find(ara[i]) == mm.end()) {
            mm[ara[i]] = 1;
            if (mm[ara[i]] == max) {
                cout << ara[i] << endl;
                break;
            }
        } else {
            mm[ara[i]]++;
            if (mm[ara[i]] == max) {
                cout << ara[i] << endl;
                break;
            }
        }
    }

    return 0;
}