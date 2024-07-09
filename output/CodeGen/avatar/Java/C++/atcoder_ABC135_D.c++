#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <string>
#include <sstream>
#include <iomanip>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <memory>
#include <iomanip>
#include <functional>
#include <new>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP2(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++)
#define REPD(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++)
#define REPC(i,j,a,b) for(int i=a;i<(b);i++) for(int j=0;j<(n);j++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define ALL(a) (a).begin(),(a).end()
#define IN(a) ((a).find(66)!= (a).end())
#define pb push_back
#define fi first
#define se second
#define MAX 100005
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,pii> msip;
typedef map<int,vpii> miv;
typedef priority_queue<int> pqi;
typedef priority_queue<pii> pqii;
typedef priority_queue<ll> pqll;
typedef priority_queue<vi> pqvvi;
typedef priority_queue<pll> pqpll;
typedef priority_queue<vs> pqvvs;
typedef priority_queue<vpii> pqvpii;
typedef priority_queue<vpll> pqvpll;
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int i,j,k,a,m,n,s,t,l,tt,cas,ans;
int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
#endif
    scanf("%d",&cas);
    while(cas--){
        scanf("%d%d",&n,&m);
        int ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&t);
                if(t==1){
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}