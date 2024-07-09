#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int N, K;
char S[maxn];
int a[maxn];
int b[maxn];

int main() {
    while (~scanf("%d%d", &N, &K)) {
        scanf("%s", S);
        int len = strlen(S);
        if (K >= 15) {
            a[0] = 0;
            for (int i = 1; i <= len; i++) {
                a[i] = a[i - 1] + (S[i - 1] == S[i]);
            }
            if (2 << K >= N) {
                printf("%d\n", a[len]);
                continue;
            }
        }
        if (K == 1) {
            printf("%d\n", S[0]);
            continue;
        }
        b[0] = 0;
        for (int i = 1; i <= len; i++) {
            b[i] = b[i - 1] + (S[i - 1] == S[i]);
        }
        if (b[len] * (2 << (K - 1)) >= N) {
            printf("%d\n", b[len]);
            continue;
        }
        for (int i = len; i >= 1; i--) {
            if (S[i] == S[i - 1]) {
                b[i] = b[i - 1] + b[i];
            } else {
                b[i] = b[i - 1] + b[i - 1];
            }
        }
        printf("%d\n", b[1]);
    }
    return 0;
}