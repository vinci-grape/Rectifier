#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N, greater<int>());
    int S = 0;
    for (int i = 0; i < N; i++) {
        S += A[i];
    }
    for (int i = 0; i < M; i++) {
        if (A[i] / (double)S - 1 / (4.0 * M) < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}