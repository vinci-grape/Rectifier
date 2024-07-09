#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[M];
    int A_sum = 0;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
        A_sum += A[i];
    }
    cout << (N - A_sum >= 0 ? N - A_sum : -1) << endl;
    return 0;
}