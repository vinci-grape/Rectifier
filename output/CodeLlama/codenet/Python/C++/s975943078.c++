#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i] %= K;
    }
    vector<int> sum_A(N + 1);
    for (int i = 1; i <= N; i++) {
        sum_A[i] = (sum_A[i - 1] + A[i - 1]) % K;
    }
    int count = 0;
    map<int, vector<int>> modK;
    modK[0] = {0};
    for (int i = 0; i < N; i++) {
        modK[sum_A[i + 1]].push_back(i + 1);
    }
    for (auto key : modK) {
        int lenK = modK[key].size();
        for (int i = 0; i < lenK; i++) {
            int a = modK[key][i];
            count += upper_bound(modK[key].begin() + i + 1, modK[key].end(), a + K) - modK[key].begin() - i - 1;
        }
    }
    cout << count << endl;
    return 0;
}