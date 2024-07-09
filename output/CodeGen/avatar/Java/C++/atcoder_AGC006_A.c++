#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define N 200 + 10
#define M 200 + 10

int f[N], b[N];

void getFail(char b[], int m) {
    int j = 0;
    f[0] = f[1] = 0;
    for (int i = 2; i <= m; i++) {
        while (j > 0 && b[j + 1]!= b[i]) j = f[j];
        if (b[j + 1] == b[i]) j++;
        f[i] = j;
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    char str[N], s1[N];
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        strcpy(s1, str);
        for (int j = 0; j < n; j++) {
            b[j] = str[j];
        }
        getFail(b, m);
        int len = min(f[m], min(n, n));
        printf("%d\n", 2 * n - len);
    }
    return 0;
}