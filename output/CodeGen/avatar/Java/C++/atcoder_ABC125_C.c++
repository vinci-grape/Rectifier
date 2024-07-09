#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A[100];
int M[100];
int L[100];
int R[100];

int gcd(int a, int b) {
    int tmp;
    if (b > a) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b == 0) return a;
    int r = -1;
    do {
        r = a % b;
        a = b;
        b = r;
    } while (r!= 0);
    return a;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        M[i] = A[i];
    }
    for (int i = 0; i < N - 1; i++) {
        L[i] = gcd(M[i], M[i + 1]);
    }
    for (int i = N - 1; i > 0; i--) {
        R[i] = gcd(M[i], M[i - 1]);
    }
    int answer = max(L[N - 2], R[1]);
    for (int i = 1; i < N - 1; i++) {
        answer = max(answer, gcd(L[i - 1], R[i + 1]));
    }
    cout << answer << endl;
    return 0;
}