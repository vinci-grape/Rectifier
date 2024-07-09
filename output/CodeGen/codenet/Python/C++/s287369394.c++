#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int A[100];
int B[100];

int ans = 0;

for (int i = 0; i < N; i++) {
    int d = min(A[i], B[i]);
    ans += d;
    A[i] -= d;
    B[i] -= d;
    d = min(A[i + 1], B[i]);
    ans += d;
    A[i + 1] -= d;
    B[i] -= d;
}

cout << ans << endl;