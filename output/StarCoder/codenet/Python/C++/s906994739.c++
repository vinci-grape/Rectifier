#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int>> F(n);
    vector<tuple<int, int>> P(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        F[i] = make_tuple(a, b);
    }
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        P[i] = make_tuple(a, b);
    }
    int ans = -1000000000;
    for (int i = 0; i < (1 << 10); i++) {
        int tmp = 0;
        vector<int> lst(n, 0);
        for (int j = 0; j < 10; j++) {
            if (i & (1 << j)) {
                for (int k = 0; k < n; k++) {
                    lst[k] += get<0>(F[k]) >> j;
                }
            }
        }
        for (int k = 0; k < n; k++) {
            tmp += get<1>(P[k]) * lst[k];
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}