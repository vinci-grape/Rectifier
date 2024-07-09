#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

class Fast {
public:
    void sol(string s, int q) {
        int n = s.length();
        int cum[n+1];
        cum[0] = cum[n] = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i-1]) {
                cum[i] = cum[i-1] + 1;
            } else {
                cum[i] = cum[i-1];
            }
        }
        int l, r;
        cin >> l >> r;
        cout << cum[r] - cum[l-1];
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string s;
        int q;
        cin >> s >> q;
        Fast f;
        f.sol(s, q);
    }
    return 0;
}