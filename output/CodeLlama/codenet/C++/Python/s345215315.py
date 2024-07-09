#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define LINF (ll)INF*INF
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,a,n) for(int i=a;i<(n);i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

#define int ll //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vp;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a, int b){
    return a/gcd(a,b)*b;
}

int ans = INF;
int h = 19,w = 15;
int dx[] = {0,1,0,-1,1,1,-1,-1};
int dy[] = {1,0,-1,0,1,-1,1,-1};
vs s(19);

void dfs(int x, int y, int cnt){
    if(cnt > 20)return;
    #print(x,y,cnt)
    #rep(i,h)print(s[i])
    if(x == h-1){
        ans = min(ans,cnt);
        return;
    }
    rep(i,8){
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 or nx >= h or ny < 0 or ny >= w)continue;
        if(s[nx][ny] != 'X')continue;
        c = True
        while(c and s[nx][ny] == 'X'):
            s[nx][ny] = '.'
            nx += dx[i]
            ny += dy[i]
            if(nx < 0 or nx >= h or ny < 0 or ny >= w):
                if(nx >= h):
                    ans = min(ans, cnt+1)
                c = False
        if(c):
            dfs(nx,ny,cnt+1)
        while(nx != x or ny != y):
            nx -= dx[i]
            ny -= dy[i]
            s[nx][ny] = 'X'
        s[x][y] = '.'
    }
}

signed main(void) {
    rep(i,h)cin >> s[i];
    int sx,sy;
    rep(i,h)rep(j,w)if(s[i][j] == 'O'):
        sx = i, sy = j;
        s[i][j] = '.';
    dfs(sx,sy,0);
    if(ans == INF):
        print(-1)
    else:
        print(ans)
}