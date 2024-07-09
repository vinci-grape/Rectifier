#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define ll long long

const int maxn = 1005;

int N;
int A[maxn];
int count = 0;

void dfs(int i, int j) {
    if (i == N - 1) {
        count++;
        return;
    }
    if (j == N - 1) {
        count++;
        return;
    }
    if (A[i] == A[i + 1]) {
        return;
    }
    if (A[i] < A[i + 1]) {
        while (A[i] <= A[i + 1]) {
            i++;
            if (i == N - 1) break;
        }
        count++;
    } else {
        while (A[i] >= A[i + 1]) {
            i++;
            if (i == N - 1) break;
        }
        count++;
    }
    dfs(i, j + 1);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        count = 0;
        dfs(0, 0);
        printf("%d\n", count);
    }
    return 0;
}