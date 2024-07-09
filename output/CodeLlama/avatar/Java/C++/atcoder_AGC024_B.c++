#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) cin >> P[i];
    map<int, int> map;
    for (int i = 0; i < N; ++i) map.insert(make_pair(P[i], i));
    vector<int> nglist;
    for (int i = 0; i < N - 1; ++i) {
        if (map[i] > map[i + 1]) nglist.push_back(i);
    }
    if (nglist.empty()) {
        cout << 0 << endl;
        return 0;
    }
    int ans = min(N - nglist[0] - 1, nglist[nglist.size() - 1] + 1);
    for (int i = 0; i < nglist.size() - 1; ++i) {
        ans = min(nglist[i] + 1 + N - nglist[i + 1] - 1, ans);
    }
    cout << ans << endl;
    return 0;
}