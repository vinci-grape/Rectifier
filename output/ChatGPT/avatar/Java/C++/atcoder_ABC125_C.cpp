#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    int tmp;
    if (b > a) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b == 0) {
        return a;
    }
    int r = -1;
    do {
        r = a % b;
        a = b;
        b = r;
    } while (r != 0);
    return a;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> M(N);
    vector<int> L(N);
    vector<int> R(N);

    L[0] = A[0];
    for (int i = 1; i < N; i++) {
        L[i] = gcd(L[i - 1], A[i]);
    }

    R[N - 1] = A[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        R[i] = gcd(R[i + 1], A[i]);
    }

    int answer = max(L[N - 2], R[1]);
    for (int i = 1; i < N - 1; i++) {
        answer = max(answer, gcd(L[i - 1], R[i + 1]));
    }

    cout << answer << endl;

}