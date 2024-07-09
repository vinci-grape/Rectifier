#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<string> r;
    int m = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(a[m]) < abs(a[i])) {
            m = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[m] >= 0 ^ a[i] >= 0) {
            r.push_back(to_string(m + 1) + " " + to_string(i + 1));
        }
    }
    if (a[m] >= 0) {
        for (int i = 1; i < n; ++i) {
            r.push_back(to_string(i) + " " + to_string(i + 1));
        }
    } else {
        for (int i = n; i > 1; --i) {
            r.push_back(to_string(i) + " " + to_string(i - 1));
        }
    }
    cout << r.size() << endl;
    for (auto &i : r) {
        cout << i << endl;
    }
}