#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    bool firstTime = true;
    int step = 1;
    while (K > 0) {
        string T = S;
        reverse(T.begin(), T.end());
        string revU = S + T;
        reverse(revU.begin(), revU.end());
        string sDash = S;
        for (int i = N; i >= 0; i -= step) {
            string tmp = revU.substr(i, N);
            if (sDash.compare(tmp) > 0) {
                sDash = tmp;
            } else {
                if (!firstTime) {
                    break;
                }
            }
        }
        if (firstTime) {
            firstTime = false;
            if (pow(2, K) > N) {
                char c = sDash[0];
                for (int i = 0; i < N; i++) {
                    cout << c;
                }
                cout << endl;
                return 0;
            }
        } else {
            step += step;
        }
        K--;
        S = sDash;
        reverse(S.begin(), S.end());
    }
    reverse(S.begin(), S.end());
    cout << S << endl;
    return 0;
}