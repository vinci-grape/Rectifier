#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;

typedef long long ll;

const int maxn = 1000005;

int n;
ll a[maxn];
ll ans;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        ans = 0;
        for(int i = 0; i < n; i++)
        {
            ll t = a[i];
            ll cnt = 0;
            for(int j = i+1; j < n; j++)
            {
                if(a[j] - t > 0)
                    cnt++;
                else
                    break;
            }
            ans = max(ans,cnt);
        }
        printf("%lld\n",ans);
    }
    return 0;
}