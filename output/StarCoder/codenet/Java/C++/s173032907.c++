#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long cost1 = 0;
    long cost2 = 0;
    int current1 = 0;
    int current2 = 0;
    vector<long> dp1(n);
    vector<long> dp2(n);
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        cost1 += abs(a[i] - current1);
        current1 = a[i];
        dp1[i] = cost1;
        cost2 += abs(a[j] - current2);
        current2 = a[j];
        dp2[j] = cost2;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << dp2[i + 1] + abs(a[1]) << endl;
        } else if (i == n - 1) {
            cout << dp1[i - 1] + abs(a[i - 1]) << endl;
        } else {
            cout << dp1[i - 1] + dp2[i + 1] + abs(a[i - 1] - a[i + 1]) << endl;
        }
    }
}