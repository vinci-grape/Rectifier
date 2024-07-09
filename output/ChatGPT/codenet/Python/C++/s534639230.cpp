#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int mod = 998244353;

void solve() {
    int N;
    cin >> N;
    vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }

    if (D[0] != 0) {
        cout << 0 << endl;
        return;
    }

    map<int, int> cnt;
    for (int i = 0; i < N; i++) {
        cnt[D[i]]++;
    }

    if (cnt[0] > 1) {
        cout << 0 << endl;
        return;
    }

    long long res = 1;

    for (int i = 1; i <= max_element(D.begin(), D.end()); i++) {
        if (cnt[i-1] == 1) {
            continue;
        }
        res *= cnt[i-1] % mod;
        res %= mod;
    }
    
    cout << res << endl;
}

int main() {
    solve();
    return 0;
}