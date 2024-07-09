#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }

    int mod = 998244353;

    if (D[0]!= 0) {
        cout << 0 << endl;
        return 0;
    }

    unordered_map<int, int> cnt;
    for (int i = 0; i < N; i++) {
        cnt[D[i]]++;
    }

    if (cnt[0] > 1) {
        cout << 0 << endl;
        return 0;
    }

    int res = 1;
    for (auto it = cnt.begin(); it!= cnt.end(); it++) {
        if (it->first == 0) {
            continue;
        }
        res *= pow(it->second, cnt[it->first+1], mod);
        res %= mod;
    }

    cout << res << endl;
}