#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
using namespace std;

typedef long long ll;

const int maxn = 5;

int a[maxn];
int r[maxn];
int b[maxn];
int ans;
int n;

int main()
{
    int i;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        r[i] = a[i] % 10;
        b[i] = 10;
        if(r[i]!= 0)
            b[i] = 10 - r[i];
        ans += a[i];
    }
    sort(b, b + n);
    for(i = 0; i < n; ++i)
    {
        if(b[i] == 0)
            ans += a[i];
        else
            ans += a[i] + b[i];
    }
    printf("%d\n", ans);
    return 0;
}