#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <ctime>
#include <cassert>
using namespace std;

typedef long long ll;
typedef double lf;
typedef pair<ll,ll> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }

#define REP(i,n) for(i=0;i<(n);i++)
#define REP1(i,n) for(i=1;i<=(n);i++)
#define FILL(i,n) memset(i,n,sizeof i)
#define X first
#define Y second
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define MP make_pair
#define EPS 1e-9
#define DEBUG(x) cout << #x << " = " << x << endl
#define DEBUGLN(x) cout << #x << " = " << x << endl
#define INF 10000000000000007
#define INFLL 100000000000000000000LL
#define PI acos(-1.0)
#define MAX 100000000

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

ll gcd(ll a, ll b){
    ll r;
    while(b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b){
    ll r;
    while(b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll power(ll a, ll b){
    ll r = 1;
    while(b){
        if(b&1) r*=a;
        a*=a;
        b>>=1;
    }
    return r;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, k;
        scanf("%lld %lld", &n, &k);
        ll ans = 0;
        ll i = 0;
        while(i < n){
            if(i + k <= n) ans++;
            i += k;
        }
        printf("%lld\n", ans);
    }
}