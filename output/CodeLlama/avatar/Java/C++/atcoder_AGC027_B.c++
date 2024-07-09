#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    long X;
    cin >> N >> X;
    vector<long> x(N);
    vector<long> xsum(N + 1);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
        xsum[i + 1] = xsum[i] + x[i];
    }
    long ans = X * N + 5 * xsum[N];
    for (int i = 1; i < N; i++) {
        long cost = X * i + 5 * (xsum[N] - xsum[N - i]);
        for (int j = 5, k = N - i; k >= 0; j += 2, k -= i) {
            if (cost > ans) {
                break;
            }
            cost += j * (xsum[k] - xsum[max(k - i, 0)]);
        }
        ans = min(ans, cost);
    }
    cout << ans + N * X << endl;
}