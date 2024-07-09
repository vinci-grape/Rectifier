#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int N = S.length();
    int M = T.length();
    int ans = M;
    for (int i = 0; i < N - M + 1; i++) {
        string S_2 = S.substr(i, M);
        int cnt = 0;
        for (int j = 0; j < M; j++) {
            if (T[j]!= S_2[j]) {
                cnt++;
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}