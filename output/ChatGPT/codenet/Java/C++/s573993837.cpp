#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
#include <bitset>
#include <numeric>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;
 
#define REP(i, j, k)for(int i=j;i<k;++i)
#define FOR(i, j) REP(i, 0, j)
#define INF 0x3f3f3f3f
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define CLR(x, y) memset(x, y, sizeof(x))
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
#define print(x) cout << x << "\n"
#define debug(x) cout << #x << ": " << x << "\n"
 
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
 
const int MAXN=100010;
const int MAXM=100010;
const int MAXK=100010;
const int MAXQ=100010;
 
ll gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
ll lcm(ll a, ll b){
    return (a*b)/gcd(a, b);
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    if(n==0){
        print(0);
    }
    else if(n==m){
        print(0);
    }
    else if(n>m){
        n=m+n%m;
        n-=m;
        print(min(m-n,n));
    }
    else{
        print(min(m-n,n));
    }
    return 0;
}