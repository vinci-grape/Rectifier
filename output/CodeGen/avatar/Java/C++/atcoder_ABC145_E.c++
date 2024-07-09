#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
    int N, T;
    scanf("%d%d", &N, &T);
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    sort(A.begin(), A.end());
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }
    sort(B.begin(), B.end());
    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }
    sort(C.begin(), C.end());
    vector<int> dp(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        for (int timeAfterEat = 0; timeAfterEat <= 6000; timeAfterEat++) {
            dp[i] = max(dp[i], dp[i - 1]);
            int time = C[i - 1];
            int value = C[i - 1] - timeAfterEat;
            if (0 <= timeAfterEat - time && timeAfterEat - time < T) {
                dp[i] = max(dp[i], dp[i - 1] + value);
            }
        }
    }
    printf("%d\n", dp[N]);
    return 0;
}