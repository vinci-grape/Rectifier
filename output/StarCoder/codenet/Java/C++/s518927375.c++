#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
using namespace std;

int main()
{
    long long k, a, b;
    while (scanf("%lld %lld %lld", &k, &a, &b)!= EOF)
    {
        if (b <= a + 2)
        {
            printf("%lld\n", 1 + k);
            continue;
        }
        long long x = k - (a - 1);
        long long ans = a + (x / 2) * (b - a) + (x % 2);
        printf("%lld\n", ans);
    }
    return 0;
}