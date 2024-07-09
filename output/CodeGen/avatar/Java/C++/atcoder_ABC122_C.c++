#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

class atcoder_ABC122_C {
public:
    static const int mod = 1000000007;
    int n;
    int q;
    char c[100];
    int range[100][2];
    int frag[100];
    int rui[100];
    int left, right;
    void input() {
        scanf("%d%d", &n, &q);
        for (int i = 0; i < q; ++i) {
            scanf("%d%d", &range[i][0], &range[i][1]);
        }
        for (int i = 0; i < n; ++i) {
            scanf("%s", c + i);
        }
    }
    void solve() {
        for (int i = 2; i <= n; ++i) {
            if (c[i - 2] == 'A' && c[i - 1] == 'C') {
                frag[i]++;
            }
            rui[i] = rui[i - 1] + frag[i];
        }
        for (int i = 0; i < q; ++i) {
            left = range[i][0];
            right = range[i][1];
            cout << rui[right] - rui[left] << endl;
        }
    }
};

int main() {
    atcoder_ABC122_C ac;
    ac.input();
    ac.solve();
    return 0;
}