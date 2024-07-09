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

    sort(A.begin(), A.end());

    while (M > 0) {
        A.back() /= 2;
        M--;

        int i = -2;
        while (M > 0 && (-N <= i) && (A[i] >= A.back())) {
            A[i] /= 2;
            M--;
            i--;
        }

        sort(A.begin(), A.end());
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    cout << sum << endl;

    return 0;
}