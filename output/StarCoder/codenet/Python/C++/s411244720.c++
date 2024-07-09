#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    set<int> S;
    for (int i = 0; i < K; i++) {
        int d;
        cin >> d;
        int A[d];
        for (int j = 0; j < d; j++) {
            cin >> A[j];
            S.insert(A[j]);
        }
    }
    cout << N - S.size();
    return 0;
}