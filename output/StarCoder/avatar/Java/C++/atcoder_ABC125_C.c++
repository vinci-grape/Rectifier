#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int M[N], L[N], R[N];
    L[0] = A[0];
    for (int i = 1; i < N; i++) {
        L[i] = __gcd(L[i - 1], A[i]);
    }
    R[N - 1] = A[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        R[i] = __gcd(R[i + 1], A[i]);
    }
    int answer = max(L[N - 2], R[1]);
    for (int i = 1; i < N - 1; i++) {
        answer = max(answer, __gcd(L[i - 1], R[i + 1]));
    }
    cout << answer << endl;
}