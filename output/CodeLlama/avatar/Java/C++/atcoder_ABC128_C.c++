#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> a(N, 0);
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
    int p = 0;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        p |= (x << i);
    }
    int ans = 0;
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
    return 0;
}