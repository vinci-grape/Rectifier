#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    while (n--) {
        int num;
        cin >> num;
        if (m.find(num) == m.end()) {
            m[num] = 1;
        } else {
            auto it = m.lower_bound(num);
            if (it->second == 1) {
                m.erase(it);
            } else {
                it->second--;
            }
            m[num]++;
        }
    }
    int ans = 0;
    for (auto it = m.begin(); it!= m.end(); it++) {
        ans += it->second;
    }
    cout << ans << endl;
}