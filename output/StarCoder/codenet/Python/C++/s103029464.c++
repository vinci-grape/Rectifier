#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> B(N);
    for (int i = N - 1; i >= 0; i--) {
        int tmp_sum = 0;
        for (int j = (i + 1) * 2 - 1; j < N; j += i + 1) {
            tmp_sum += B[j];
            tmp_sum %= 2;
        }
        B[i] = tmp_sum ^ A[i];
    }
    cout << accumulate(B.begin(), B.end(), 0) << endl;
    for (int i = 0; i < N; i++) {
        if (B[i] == 1) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}