#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <sstream>
using namespace std;
#define clr(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define ins insert
#define mkp make_pair
#define mt make_tuple
#define forn(i,n) for(int i=0,_=n;i<_;i++)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tt;
const int INF=2147483640;
const double PI=acos(-1),EPS=1e-9;
const ll INF_LL=2147483640,MOD=1000000007;
const int MAXN=1e5+5,MAXM=1e5+5;
int n,m,a[MAXN],b[MAXM];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++) scanf("%d",&b[i]);
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int j=lower_bound(b+1,b+m+1,a[i])-b;
        if(j>=m)
        {
            ans++;
            continue;
        }
        int k=upper_bound(b+1,b+m+1,a[i])-b;
        if(k>=m)
        {
            ans++;
            continue;
        }
        if(k-j>=2)
        {
            ans++;
            continue;
        }
        for(int l=j+1;l<=k;l++)
        {
            if(a[i]==b[l])
            {
                ans++;
                break;
            }
        }
    }
    printf("%d\n",ans);
}