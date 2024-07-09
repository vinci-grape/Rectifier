#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int maxn=1e5+7;
const int maxm=1e5+7;
const int inf=1e9;
struct edge
{
    int to,next,w;
}e[maxm];
int head[maxn],tot,n,m,cnt;
int d[maxn],p[maxn],d1[maxn],p1[maxn];
bool vis[maxn];
void add(int x,int y,int w)
{
    e[++cnt].to=y;
    e[cnt].next=head[x];
    e[cnt].w=w;
    head[x]=cnt;
}
void dfs(int x,int fa)
{
    d[x]=1;
    for(int i=head[x];i;i=e[i].next)
    {
        int v=e[i].to;
        if(v==fa)continue;
        dfs(v,x);
        d[x]+=max(d[v],d[v]+1);
    }
}
void dfs1(int x,int fa)
{
    p[x]=1;
    for(int i=head[x];i;i=e[i].next)
    {
        int v=e[i].to;
        if(v==fa)continue;
        dfs1(v,x);
        p[x]+=p[v];
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        int x,y,w;
        scanf("%d%d%d",&x,&y,&w);
        add(x,y,w);
        add(y,x,w);
    }
    dfs(1,0);
    dfs1(1,0);
    for(int i=1;