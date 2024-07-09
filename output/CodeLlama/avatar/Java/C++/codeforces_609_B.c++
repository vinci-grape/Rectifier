#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    long long ans = 0;
    scanf("%d %d", &n, &m);
    int arr[n];
    int gen[11];
    memset(gen, 0, sizeof(gen));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        gen[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k <= m; k++)
        {
            if (i != k)
            {
                ans += (long long)gen[i] * gen[k];
            }
        }
    }
    printf("%lld", ans / 2);
    return 0;
}