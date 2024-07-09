#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

#define ll long long

const int maxn = 1005;

int n, k;
int s[maxn];

int main()
{
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    int ans = 1000000000;
    for(int i = 0; i < n - k + 1; i++)
        for(int j = i + k - 1; j < n; j++)
        {
            int temp = s[i] + s[j];
            if(temp < 0)
                temp = 2 * (temp + s[i]);
            else
                temp = 2 * s[i] + s[j];
            ans = min(ans, temp);
        }
    printf("%d\n", ans);
    return 0;
}