#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    set<int> S;
    for (int i = 0; i < K; ++i) {
        int d;
        cin >> d;
        int A[d];
        for (int j = 0; j < d; ++j) {
            cin >> A[j];
        }
        sort(A, A + d);
        S.insert(A[0]);
        for (int j = 1; j < d; ++j) {
            S.insert(A[j] - A[j - 1]);
        }
    }
    cout << N - S.size() << endl;
    return 0;
}