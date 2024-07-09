#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int a = l[i], b = l[j];
            int right = lower_bound(l.begin(), l.end(), a + b) - l.begin();
            int left = upper_bound(l.begin(), l.end(), max(a - b, b - a)) - l.begin();
            int tmp = max(0, right - left);
            if (left <= i && i < right) {
                tmp--;
            }
            if (left <= j && j < right) {
                tmp--;
            }
            ans += tmp;
        }
    }
    cout << ans / 3;
}