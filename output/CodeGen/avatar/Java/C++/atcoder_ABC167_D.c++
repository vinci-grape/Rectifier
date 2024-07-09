#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cassert>
#include <functional>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

const int MAXN = 100010;
const int MAXM = 100010;
const int INF = 0x3f3f3f3f;

int n,m;
int a[MAXN];
int b[MAXN];
int c[MAXN];
int d[MAXN];
int e[MAXN];
int f[MAXN];
int g[MAXN];
int h[MAXN];
int i[MAXN];
int j[MAXN];
int k[MAXN];
int l[MAXN];
int m[MAXN];
int n[MAXN];
int o[MAXN];
int p[MAXN];
int q[MAXN];
int r[MAXN];
int s[MAXN];
int t[MAXN];
int u[MAXN];
int v[MAXN];
int w[MAXN];
int x[MAXN];
int y[MAXN];
int z[MAXN];

int ans;

void dfs(int x,int y,int z,int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t,int u,int v,int w,int x,int y,int z)
{
    if(x==n && y==m && z==o)
    {
        ans++;
        return;
    }
    if(x>n || y>m || z>o)
        return;
    if(a>=n || b>=m || c>=o || d>=n || e>=m || f>=o || g>=n || h>=m || i>=o || j>=n || k>=m || l>=o || m>=n || n>=m || o>=n)
        return;
    a++;b++;c++;d++;e++;f++;g++;h++;i++;j++;k++;l++;m++;n++;o++;p++;q++;r++;s++;t++;u++;v++;w++;x++;y++;z++;
    dfs(x+1,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    a--;b--;c--;d--;e--;f--;g--;h--;i--;j--;k--;l--;m--;n--;o--;p--;q--;r--;s--;t--;u--;v--;w--;x--;y--;z--;
    dfs(x,y+1,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    a--;b--;c--;d--;e--;f--;g--;h--;i--;j--;k--;l--;m--;n--;o--;p--;q--;r--;s--;t--;u--;v--;w--;x--;y--;z--;
    dfs(x,y,z+1,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    a--;b--;c--;d--;e--;f--;g--;h--;i--;j--;k--;l--;m--;n--;o--;p--;q--;r--;s--;t--;u--;v--;w--;x--;y--;z--;
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&c[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&d[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&e[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&f[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&g[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&h[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&i[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&j[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&k[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&l[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&m[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&n[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&o[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&p[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&q[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&r[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&s[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&t[i]);
    for(int i=1;i<=n;i++)
        scan