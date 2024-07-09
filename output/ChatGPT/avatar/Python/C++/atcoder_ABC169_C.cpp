#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
#include <bitset>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define ff first
#define ss second
#define si(x) ((int)(x).size())
#define rep(i,n) for(int i=0;i<si(n);i++)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vvi vector<vector<int>>
#define vvpii vector<vector<pii>>
#define vvpll vector<vector<pll>>
#define vvcc vector<vector<char>>
#define vvll vector<vector<ll>>
#define vcc vector<char>
#define vll vector<ll>
#define vstring vector<string>
#define mi(x,y) map<x,y>
#define usi(x) unordered_set<x>
#define umi(x,y) unordered_map<x,y>
#define maxpq(x) priority_queue<x>
#define minpq(x) priority_queue<x,vector<x>,greater<x>>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MOD 1000000007
#define INF 1e18
#define PRECISION(x) cout << fixed << setprecision(x)

#define TRACE
#ifdef TRACE
    #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cerr << name << " : " << arg1 << endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ',');
        cerr.write(names, comma - names) << " : " << arg1<<" | ";
        __f(comma+1, args...);
    }
#else
    #define trace(...) 1
#endif

ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll modInverse(ll n, ll p)
{
    return power(n, p - 2, p);
}

ll nCrModPFermat(ll n, ll r, ll p)
{
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main()
{
    fastio;
    int a, b;
    cin >> a >> b;
    cout << (a * b) / 100 << endl;

    return 0;
}