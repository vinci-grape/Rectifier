#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());
    int S = 0;
    for (int i = 0; i < N; i++) {
        S += A[i];
    }
    for (int i = 0; i < M; i++) {
        if ((double)A[i] / S - 1.0 / (4 * M) < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}