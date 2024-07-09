#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctype.h>
#include <string.h>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<bool> VB;
typedef vector<string> VS;
typedef list<int> LI;
typedef map<int,int> MII;
typedef map<string,int> MSI;
typedef map<int,string> MIS;
typedef pair<int,int> PII;

#define PI acos(-1)
#define INF 0x3f3f3f3f
#define EPS 1e-9
#define INF 0x3f3f3f3f
#define ceildiv(a,b) ((a) / (b) + ((a) % (b) > 0? 1 : 0))
#define flt(x) ((1.0) * (x))
#define sz(x) ((int) (x).size())
#define mp(x,y) make_pair((x),(y))
#define pb(x) push_back(x)
#define all(x) (x).begin(),(x).end()
#define intlim 2147483648
#define rd(x) scanf("%d", &x)
#define rd2(x,y) scanf("%d%d", &x, &y)
#define rd3(x,y,z) scanf("%d%d%d", &x, &y, &z)
#define rd4(w,x,y,z) scanf("%d%d%d%d", &w, &x, &y, &z)
#define pc(x) putchar(x)
#define pr(x) printf("%d\n", (x))
#define pr2(x,y) printf("%d %d\n", (x), (y))
#define pr3(x,y,z) printf("%d %d %d\n", (x), (y), (z))
#define pr4(w,x,y,z) printf("%d %d %d %d\n", (w), (x), (y), (z))
#define sc(x) scanf("%s", &x)
#define for(i,a,b) for(int i = (a); i < (b); ++i)
#define forr(i,a,b) for(int i = (a); i >= (b); --i)
#define forn(i,n) for(int i = 0; i < (n); ++i)
#define forin(i,n) for(int i = 0; i < (n); ++i)
#define forjn(i,n) for(int i = 0; i < (n); ++i)
#define forkn(i,n) for(int i = 0; i < (n); ++i)
#define INF 0x3f3f3f3f
#define PI acos(-1)
#define MOD 1000000007
#define EPS 1e-9
#define MAX 100000000

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int b[m];
        for(int i=0;i<m;i++)
            cin >> b[i];
        int c[n];
        for(int i=0;i<n;i++)
            c[i]=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[j]==b[i])
                    c[j]++;
            }
        }
        int max=0;
        for(int i=0;i<n;i++){
            if(c[i]>max)
                max=c[i];
        }
        cout << max << endl;
    }
    return 0;
}