#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> hm;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        hm[val]++;
    }
    int ans = 0;
    for (auto it : hm) {
        int num = it.second;
        if (num > it.first)
            ans += num - it.first;
        else if (num < it.first)
            ans += num;
    }
    cout << ans << endl;
    return 0;
}