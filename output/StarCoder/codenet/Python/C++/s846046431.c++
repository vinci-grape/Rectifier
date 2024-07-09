#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end(), greater<int>());
    double S = 0;
    for (int i = 0; i < M; i++) S += A[i];
    for (int i = 0; i < M; i++) {
        if (A[i] / S - 1.0 / (4 * M) < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}