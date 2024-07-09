#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long ll;

const int maxn = 1005;

int n, m;
int arr[maxn], q[maxn];

int fun(int arr[], int q, int n, int m) {
    int res = 0;
    int i = 0, j = n;
    while (i <= j) {
        int md = i + (j - i) / 2;
        if (arr[md] == q) return md;
        else if (arr[md] > q) {
            res = md;
            j = md - 1;
        } else i = md + 1;
    }
    return res;
}

int main() {
    while (scanf("%d%d", &n, &m)!= EOF) {
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for (int i = 0; i < m; i++) scanf("%d", &q[i]);
        int res = 0;
        for (int i = 0; i < m; i++) res = max(res, fun(arr, q[i], n, m));
        printf("%d\n", res);
    }
    return 0;
}