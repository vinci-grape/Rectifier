#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == (int)set(a.begin(), a.end())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}