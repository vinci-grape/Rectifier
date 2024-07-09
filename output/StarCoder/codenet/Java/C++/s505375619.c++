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
    int n;
    scanf("%d", &n);
    int v[n], c[n];
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        int tmp = dp[i - 1] + (v[i - 1] - c[i - 1]);
        dp[i] = tmp > dp[i - 1]? tmp : dp[i - 1];
    }
    int tmp = dp[n - 1] + (v[n - 1] - c[n - 1]);
    dp[n - 1] = tmp > dp[n - 1]? tmp : dp[n - 1];
    printf("%d", dp[n - 1]);
    return 0;
}