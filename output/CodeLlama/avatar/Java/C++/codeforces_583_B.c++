#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;
#define F(i,a,b) for(int i = a; i < b; i++)
#define RF(i,a,b) for(int i = a; i >= b; i--)
#define MAX 100000000
typedef long long ll;
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
const int N = 100000 + 10;
int a[N], b[N];
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        int s = 0;
        int q = 0;
        memset(b, 0, sizeof(b));
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int tem = 1;
        while(q != n)
        {
            s++;
            if(tem == 1)
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i] <= q && b[i] == 0)
                    {
                        b[i] = 1;
                        q++;
                    }
                }
                tem = 0;
            }
            else
            {
                for(int i = n - 1; i >= 0; i--)
                {
                    if(a[i] <= q && b[i] == 0)
                    {
                        b[i] = 1;
                        q++;
                    }
                }
                tem = 1;
            }
        }
        printf("%d\n", s);
    }
    return 0;
}