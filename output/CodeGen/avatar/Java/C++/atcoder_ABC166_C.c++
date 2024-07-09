#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

#define ll long long

class atcoder_ABC166_C {
public:
    int N;
    ll H[100];
    bool ans[100];
    vector<ll> H2;
    vector<bool> ans2;
    atcoder_ABC166_C(int _N) {
        N = _N;
        for (int i = 0; i < N; i++) {
            scanf("%lld", &H[i]);
            H2.push_back(H[i]);
            ans[i] = true;
        }
    }
    void solve() {
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (H[i] < H[j]) {
                    ans[i] = false;
                    break;
                } else if (H[i] > H[j]) {
                    ans[j] = false;
                    break;
                } else {
                    ans[i] = false;
                    ans[j] = false;
                }
            }
        }
        int ans2 = 0;
        for (int i = 0; i < N; i++) {
            if (ans[i]) ans2++;
        }
        cout << ans2 << endl;
    }
};

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        atcoder_ABC166_C A(100);
        A.solve();
    }
    return 0;
}