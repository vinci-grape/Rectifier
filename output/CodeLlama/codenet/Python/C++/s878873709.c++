#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    set<int> s = {1, 2, 4, 8, 16, 32, 64};
    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (s.find(i) != s.end()) {
            ans = i;
        }
    }

    cout << ans << endl;
    return 0;
}