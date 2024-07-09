#include <bits/stdc++.h>
using namespace std;
int main() {
    double N, d, x;
    cin >> N >> d >> x;
    double ans = 0.0;
    while (N > 0.5) {
        ans += d + x * (N - 0.5);
        d = (N + 1.0) * d / N + (5.0 * x) / (2.0 * N);
        x = (1.0 + (2.0 / N)) * x;
        --N;
    }
    cout << fixed << setprecision(20) << ans << endl;
}