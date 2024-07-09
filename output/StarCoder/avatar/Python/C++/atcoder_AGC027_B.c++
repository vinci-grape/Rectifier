#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> S(N);
    S[0] = A[0];
    for (int i = 1; i < N; i++) {
        S[i] = S[i - 1] + A[i];
    }
    int ans = INT_MAX;
    for (int k = 1; k <= N; k++) {
        int E = k * X + 2 * accumulate(S.begin() + N - 2 * k - 1, S.end() - 1, 0);
        ans = min(ans, E);
    }
    cout << ans + N * X + 5 * S[N - 1] << endl;
    return 0;
}