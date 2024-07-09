#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    unordered_map<int, int> l;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (l.find(lst[i]) == l.end()) {
            l[lst[i]] = 1;
        } else {
            l[lst[i]] += 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (l[lst[i]] > 1) {
            res += n - i - l[lst[i]];
            l[lst[i]] -= 1;
        } else {
            res += n - i - 1;
        }
    }
    cout << res << endl;
    return 0;
}