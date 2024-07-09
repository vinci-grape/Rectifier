#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <sstream>
#include <stack>
#include <iterator>
#include <cmath>
#include <iomanip>
#include <numeric>
#include <functional>
#include <bitset>
#include <utility>
#include <ctime>

using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0,_=n;i<_;++i)
#define fori(i,n) for(int i=0;i<n;++i)
#define ford(i,n) for(int i=n-1;i>=0;--i)
#define forl(i,n) for(ll i=0;i<n;++i)
#define forir(i,n) for(int i=n-1;i>=0;--i)
#define fordr(i,n) for(int i=n-1;i>=0;i-=n)
#define forcr(i,n) for(int i=n-1;i>=0;i-=n)
#define INF 1000000000000000007
#define EPS 1e-9
#define bitcount __builtin_popcount
#define all(c) c.begin(), c.end()
#define maX(a,b) (a)>(b)?(a):(b)
#define miN(a,b) (a)<(b)?(a):(b)
#define DREP(a) sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind) lower_bound(all(arr),ind)-arr.begin()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!= (c).end(); i++)
#define present(c,x) ((c).find(x)!= (c).end())
#define cpresent(c,x) (find(all(c),x)!= (c).end())

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef long long LL;
typedef vector<long long > VLL;
typedef pair<int, int > PII;
typedef vector< PII > VPII;
/*Main Code*/
#define EXIT_SUCCESS 0
// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
	int
main ( int argc, char *argv[] ){
    int n;
    long long pre;
    int i;
    long long min;
    long long val1,val2;
    scanf("%d",&n);
    pre=0;
    for(i=1;i<=n;i++){
        scanf("%lld",&pre);
        pre+=pre;
    }
    min=Long.MAX_VALUE;
    for(i=1;i<n;i++){
        val1=pre-pre;
        val2=pre-pre;
        min=Math.min(min,Math.abs(val1-val2));
    }
    printf("%lld\n",min);
    return EXIT_SUCCESS;
}		// ----------  end of function main  ----------