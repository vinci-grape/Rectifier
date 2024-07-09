#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    int A_sum = accumulate(A.begin(), A.end(), 0);

    if (N - A_sum >= 0) {
        cout << N - A_sum << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}