#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int N, M;
    int A[100];
    int A_sum;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    A_sum = 0;
    for (int i = 0; i < M; i++) {
        A_sum += A[i];
    }
    cout << N - A_sum << endl;
    return 0;
}