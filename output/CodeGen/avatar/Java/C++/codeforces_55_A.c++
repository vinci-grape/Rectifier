#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

typedef long long int lli;

const int maxn = 1000;

int n, i, k, p, flag;
int a[maxn];

int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    for (i = 1; i <= n; ++i)
        if (a[i] == 0) {
            flag = false;
            break;
        }
    if (flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}