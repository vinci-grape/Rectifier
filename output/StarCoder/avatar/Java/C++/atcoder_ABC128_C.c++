#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M, p, ans;
    cin >> N >> M;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int s;
            cin >> s;
            s--;
            a[s] |= (1 << i);
        }
    }
    cin >> p;
    ans = 0;
    for (int s = 0; s < (1 << N); s++) {
        int t = 0;
        for (int i = 0; i < N; i++) {
            if ((s >> i) & 1) {
                t ^= a[i];
            }
        }
        if (p == t) {
            ans++;
        }
    }
    cout << ans << endl;
}