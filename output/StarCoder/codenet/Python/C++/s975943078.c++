#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sum_A[N + 1];
    sum_A[0] = 0;
    for (int i = 0; i < N; i++) {
        sum_A[i + 1] = (sum_A[i] + A[i]) % K;
    }

    int count = 0;
    map<int, vector<int>> modK;
    modK[0] = {0};
    for (int i = 0; i < N; i++) {
        if (sum_A[i + 1] not in modK) modK[sum_A[i + 1]] = {i + 1};
        else modK[sum_A[i + 1]].push_back(i + 1);
    }

    for (auto key : modK) {
        int lenK = modK[key].size();
        for (int i = 0; i < lenK; i++) {
            count += upper_bound(modK[key].begin(), modK[key].end(), modK[key][i] + K, greater<int>()) - modK[key].begin() - i - 1;
        }
    }

    cout << count << '\n';
    return 0;
}