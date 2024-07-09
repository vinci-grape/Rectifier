#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i] %= K;
    }
    int sum_A[N + 1];
    for (int i = 0; i < N + 1; i++) {
        sum_A[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        sum_A[i + 1] = (sum_A[i] + A[i]) % K;
    }
    int count = 0;
    vector<int> modK[K + 1];
    for (int i = 0; i < K + 1; i++) {
        modK[i].clear();
    }
    for (int i = 0; i < N; i++) {
        int key = sum_A[i + 1];
        if (modK[key].empty()) {
            modK[key].push_back(i + 1);
        } else {
            auto it = lower_bound(modK[key].begin(), modK[key].end(), i + 1);
            if (it == modK[key].end()) {
                modK[key].push_back(i + 1);
            } else {
                count += it - modK[key].begin();
                modK[key].insert(it, i + 1);
            }
        }
    }
    cout << count << endl;
    return 0;
}