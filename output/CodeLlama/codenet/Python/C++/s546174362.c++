#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[100000];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);
    while (M) {
        A[N - 1] /= 2;
        M--;
        int i = N - 2;
        while (M && (-N <= i && A[i] >= A[N - 1])) {
            A[i] /= 2;
            M--;
            i--;
        }
        sort(A, A + N);
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    cout << sum;
    return 0;
}