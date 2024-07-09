#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <list>
#include <queue>
#include <stack>
#include <deque>
#include <complex>
#include <functional>
#include <bitset>
#include <climits>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FOPI freopen("input.txt","r",stdin);
#define DOPI freopen("output.txt","w",stdout);
#define ll long long int
#define ull unsigned long long int
#define fro(i,a,n) for(ll i=a;i<n;i++)
#define pre(i,a,n) for(ll i=n-1;i>=a;i--)
#define mem(a,x) memset(a,x,sizeof(a))
#define ls l,mid,rt<<1
#define rs mid+1,r,rt<<1|1
#define fi first
#define se second
#define mp make_pair
typedef pair<int,int> pii;
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
const double PI = acos(-1.0);
const double EPS = 1e-11;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
//const int mod = 998244353;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator << (ostream &out, pii &p){
    return out<<p.fi<<" "<<p.se;
}
istream& operator >> (istream &in, pii &p){
    return in>>p.fi>>p.se;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //DOPI;
    int n;
    cin>>n;
    int maxv = INT_MIN;
    int minv = INT_MAX;
    for(int i=1;i<n;i++){
        int ri;
        cin>>ri;
        maxv = max(maxv,ri-minv);
        minv = min(minv,ri);
    }
    cout<<maxv<<endl;
    return 0;
}