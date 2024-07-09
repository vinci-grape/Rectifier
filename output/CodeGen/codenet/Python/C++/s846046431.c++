#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N, greater<int>());
    int S = accumulate(A, A + N, 0);
    for (int i = 0; i < M; i++) {
        if (A[i] / S - 1 / (4 * M) < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}