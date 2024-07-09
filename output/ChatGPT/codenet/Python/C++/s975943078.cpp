#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solve() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i] = (A[i] % K) - 1;
    }
    vector<int> sum_A(N + 1);
    vector<int> count(K);

    int ans = 0;
    map<int, vector<int>> modK;
    modK[0].push_back(0);
    for (int i = 0; i < N; i++) {
        sum_A[i + 1] = (sum_A[i] + A[i]) % K;
        modK[sum_A[i + 1]].push_back(i + 1);
    }

    for (auto it = modK.begin(); it != modK.end(); it++) {
        int key = it->first;
        vector<int>& values = it->second;
        int lenK = values.size();
        for (int i = 0; i < lenK; i++) {
            ans += upper_bound(values.begin(), values.end(), values[i] + K) - values.begin() - i - 1;
        }
    }

    cout << ans << endl;
    return 0;
}

int main() {
    solve();
}