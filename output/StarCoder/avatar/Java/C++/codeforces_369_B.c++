#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, r, sAll, sk;
    cin >> n >> k >> l >> r >> sAll >> sk;
    int ans[n];
    for (int i = 0; i < n; i++) {
        ans[i] = l;
    }
    sAll -= sk + (n - k) * l;
    sk -= k * l;
    while (sk > 0) {
        int idx = n - 1;
        while (sk > 0 && idx >= n - k) {
            ans[idx] += 1;
            sk -= 1;
            idx -= 1;
        }
    }
    while (sAll > 0) {
        int idx = 0;
        while (sAll > 0 && idx < n - k) {
            ans[idx] += 1;
            sAll -= 1;
            idx += 1;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}