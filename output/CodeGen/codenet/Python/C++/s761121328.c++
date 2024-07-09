#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    int s = A[0] ^ A[1];
    for (int i = 2; i < N; i++) {
        s = s ^ A[i];
    }
    for (int i = 0; i < N; i++) {
        B[i] = s ^ A[i];
    }
    char *L = new char[N * 2 + 1];
    for (int i = 0; i < N; i++) {
        sprintf(L + i * 2, "%d", B[i]);
    }
    L[N * 2] = '\0';
    cout << L << endl;
    return 0;
}