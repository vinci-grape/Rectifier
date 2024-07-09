#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N], y[N];
    for (int i = 0; i < N; ++i) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < N; ++i) {
        vector<double> thetas;
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;
            thetas.push_back(atan2(y[j] - y[i], x[j] - x[i]));
        }
        sort(thetas.begin(), thetas.end());
        thetas.push_back(thetas[0] + 2 * M_PI);
        double ans = 0;
        for (int k = 0; k < N - 1; ++k) ans = max(ans, thetas[k + 1] - thetas[k] - M_PI);
        cout << ans / (M_PI * 2) << endl;
    }
}