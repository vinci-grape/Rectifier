#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <string>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <ctime>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define MAXN 100005
#define MAXK 100005
#define INF 100000000
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define ABS(x) ((x)<0?-(x):(x))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,a,b) for(int i=0;i<=b-a;i++)
#define REPD(i,a,b) for(int i=0;i>=b-a;i--)
#define VAR(i,a,b) __typeof(a) i=a;
#define FORE(i,a,b) for(VAR(i,a,b);i<b;i++)
#define FORDE(i,a,b) for(VAR(i,a,b);i>b;i--)
#define MP make_pair
#define PB push_back
#define ALL(a) (a).begin(),(a).end()
#define F first
#define S second
#define SZ size()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a,b) memset(a,b,sizeof(a))
#define MEM(a,x) memset(a,x,sizeof(a))
#define X first
#define Y second
#define MAX_V 100005
#define EPS 1e-9
#define PI acos(-1.0)
#define INF 100000000
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int,int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;
//typedef vector<bool> VB;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef vector<bool> VB;
typedef long long int lint;
typedef unsigned long long int luint;

const double pi = acos(-1.0);
const double eps = 1e-9;
const int INF = 100000000;
const int maxn = 100005;
const int maxm = 100005;
const int maxk = 100005;

int n,m,k;
int a[maxn],b[maxn];
int dp[maxn][maxk];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&m,&k);
        FOR(i,1,n)scanf("%d",a+i);
        FOR(i,1,m)scanf("%d",b+i);
        FOR(i,1,n)FOR(j,1,k)dp[i][j] = INF;
        dp[1][0] = 0;
        FOR(i,1,n)FOR(j,1,k)if(a[i] == b[j])dp[i][j] = dp[i-1][j-1] + 1;
        FOR(i,1,n)FOR(j,1,k)if(dp[i][j] > dp[i-1][j])dp[i][j] = dp[i-1][j];
        printf("%d\n",dp[n][k]);
    }
    return 0;
}