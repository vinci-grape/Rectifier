#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int mn = N + 1, mx = -1;
    for (int i = 0; i < N; i++) {
        if (i + 1 != A[i]) {
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }
    if (mx == -1) {
        cout << "0 0";
    } else {
        A = vector<int>(A.begin(), A.begin() + mn);
        A.insert(A.end(), A.rbegin(), A.rbegin() + (mx - mn + 1));
        A.insert(A.end(), A.begin() + (mx + 1), A.end());
        if (is_sorted(A.begin(), A.end())) {
            cout << mn + 1 << " " << mx + 1;
        } else {
            cout << "0 0";
        }
    }
    return 0;
}