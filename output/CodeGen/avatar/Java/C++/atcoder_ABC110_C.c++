#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    string A = "abcdefghijklmnopqrstuvwxyz";
    bool res = true;
    for (int i = 0; i < A.size(); ++i) {
        int sIdx = S.find(A[i]);
        if (sIdx < 0) continue;
        string t = string(1, T[sIdx]);
        int idx = 0;
        while (idx < S.size()) {
            int sIdx2 = S.find(A[i], idx);
            if (sIdx2 < 0) {
                if (T.find(t, idx) >= 0) {
                    res = false;
                    break;
                }
                break;
            }
            if (S[sIdx2] == T[idx]) {
                idx = sIdx2 + 1;
            } else {
                if (T.find(t, idx) >= 0) {
                    res = false;
                    break;
                }
                break;
            }
        }
        if (!res) break;
    }
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}