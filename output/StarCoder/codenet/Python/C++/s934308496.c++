#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    sort(m.begin(), m.end());
    cout << n + (x - accumulate(m.begin(), m.end(), 0)) / m[0];
    return 0;
}