#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, g;
    cin >> d >> g;
    vector<vector<int>> pc(d, vector<int>(2));
    for (int i = 0; i < d; i++) {
        cin >> pc[i][0] >> pc[i][1];
    }

    int ans = INT_MAX;
    for (int bit = 0; bit < (1 << d); bit++) {
        int count = 0;
        int sum = 0;
        set<int> nokori;
        for (int i = 0; i < d; i++) {
            if (bit & (1 << i)) {
                sum += pc[i][0] * (i + 1) * 100 + pc[i][1];
                count += pc[i][0];
                nokori.erase(i + 1);
            }
        }
        if (sum < g) {
            int use = *nokori.rbegin();
            int n = min(pc[use - 1][0], -(-(g - sum) / (use * 100)));
            count += n;
            sum += n * use * 100;
        }
        if (sum >= g) {
            ans = min(ans, count);
        }
    }
    cout << ans << endl;
}