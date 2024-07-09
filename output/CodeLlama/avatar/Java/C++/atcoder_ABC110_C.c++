#include <bits/stdc++.h>
using namespace std;
int main() {
    string S, T;
    cin >> S >> T;
    vector<string> A = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    bool res = true;
    for (string s : A) {
        int sIdx = S.find(s);
        if (sIdx < 0) continue;
        string t = string(1, T[sIdx]);
        int idx = 0;
        while (idx < S.length()) {
            if (S.find(s, idx) >= 0) {
                if (S.find(s, idx) != T.find(t, idx)) {
                    res = false;
                    break;
                } else {
                    idx = S.find(s, idx) + 1;
                }
            } else if (T.find(t, idx) >= 0) {
                res = false;
                break;
            } else break;
        }
        if (!res) break;
    }
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
}