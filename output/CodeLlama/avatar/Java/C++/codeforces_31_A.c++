#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n, f = 0, k, j, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (k = 0; k < n; k++)
    {
        int t = a[k];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (i != j && t == (a[i] + a[j]))
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
        if (f == 1)
            break;
    }
    if (f == 1)
        printf("%d %d %d\n", k + 1, j + 1, i + 1);
    else
        printf("-1\n");
}