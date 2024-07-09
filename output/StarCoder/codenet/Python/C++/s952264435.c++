#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[M];
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    int A_sum = 0;
    for (int i = 0; i < M; i++) {
        A_sum += A[i];
    }
    cout << N - A_sum;
    return 0;
}