#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> S(N);
    partial_sum(A.begin(), A.end(), S.begin());

    int ans = INT_MAX;
    for (int k = 1; k <= N; k++) {
        int E = k * X + 2 * accumulate(S.rbegin(), S.rbegin() + N - 2 * k, 0);
        ans = min(ans, E);
    }

    cout << ans + N * X + 5 * S.back() << endl;

    return 0;
}