#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#define lld "lld"
#define llu "llu"
#define ulld "ulld"
#define ullu "ullu"
#define sc(a) scanf("%d", &a)
#define psc(a) printf("%d", a)
#define scll(a) scanf("%lld", &a)
#define pscll(a) printf("%lld", a)
#define scul(a) scanf("%llu", &a)
#define pscul(a) printf("%llu", a)
#define scllu(a) scanf("%llu", &a)
#define pscllu(a) printf("%llu", a)
#define sculu(a) scanf("%llu", &a)
#define psculu(a) printf("%llu", a)
#define sclld(a) scanf("%lld", &a)
#define psclld(a) printf("%lld", a)
#define sculld(a) scanf("%llu", &a)
#define psculld(a) printf("%llu", a)
using namespace std;

const int MAXN = 100005;
int N, M;
int edge[MAXN][2];
int used[MAXN];
int ans;

void dfs(int node, int parent)
{
    used[node] = 1;
    for(int i = 0; i < edge[node][0]; i++)
    {
        if(!used[edge[node][1+i]])
        {
            dfs(edge[node][1+i], node);
        }
    }
}

int main()
{
    while(sc(N) && N)
    {
        sc(M);
        for(int i = 0; i < M; i++)
        {
            sc(edge[i][0]);
            sc(edge[i][1]);
        }
        ans = 0;
        for(int i = 0; i < N; i++)
        {
            if(!used[i])
            {
                dfs(i, -1);
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}