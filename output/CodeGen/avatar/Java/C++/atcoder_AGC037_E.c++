#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class atcoder_AGC037_E {
public:
    int N;
    int K;
    string S;
    vector<string> T;
    atcoder_AGC037_E(int N, int K, string S) : N(N), K(K), S(S) {
        T = vector<string>(N);
        for (int i = 0; i < N; ++i) {
            T[i] = S.substr(i, N);
        }
    }
    void solve() {
        sort(T.begin(), T.end(), [&](const string &a, const string &b) {
            return a.compare(b) < 0;
        });
        string sDash;
        for (int i = 0; i < N; ++i) {
            if (i == 0) {
                sDash = T[i];
            } else {
                if (sDash.compare(T[i]) > 0) {
                    sDash = T[i];
                }
            }
        }
        reverse(sDash.begin(), sDash.end());
        cout << sDash << endl;
    }
};

int main() {
    int N, K;
    cin >> N >> K;
    atcoder_AGC037_E A(N, K, string(N, 'A'));
    A.solve();
    return 0;
}