#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int d = min(A[i], B[i]);
        ans += d;
        A[i] -= d;
        B[i] -= d;
        d = min(A[i + 1], B[i]);
        ans += d;
        A[i + 1] -= d;
        B[i] -= d;
    }

    cout << ans << endl;
}