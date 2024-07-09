#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define ll long long

const int maxn = 1005;

int n;
int a[maxn];
char s[maxn];
ll sum[maxn];
ll sum1[maxn];
ll ans = 0;

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%s", s);
    for(int i = 0; i < n; ++i)
        if(s[i] == 'B')
            sum[i] = a[i];
        else
            sum[i] = -a[i];
    for(int i = 0; i < n; ++i)
        if(s[i] == 'A')
            sum1[i] = a[i];
        else
            sum1[i] = -a[i];
    for(int i = n - 1; i >= 0; --i)
        if(s[i] == 'A')
            sum1[i] = a[i];
        else
            sum1[i] = -a[i];
    for(int i = 0; i < n; ++i)
        ans = max(ans, max(sum[i], sum1[i]));
    printf("%lld\n", ans);
    return 0;
}