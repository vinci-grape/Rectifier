#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef pair<double,double> dd;
typedef pair<int,ii> iii;
typedef pair<double,dd> ddd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<vc> vvc;
typedef vector<bool> vb;

#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define all(x) x.begin(),x.end()
#define Pi(x) printf("%d",x)
#define Pl(x) printf("%lld",x)
#define os() printf(" ")
#define nl() printf("\n");
#define F first
#define S second
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define mem(x,i) memset(x,i,sizeof(x))
#define fori(i,s,n) for(int i=(s);i<(n);++i)
#define forl(i,s,n) for(ll i=(s);i<(n);++i)
#define forir(i,s,n) for(int i=(n)-1;i>=(s);--i)
#define forlr(i,s,n) for(ll i=(n)-1;i>=(s);--i)
#define INF 8944674407370955161LL
#define debug(i,st,arr) fori(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define debugl(i,st,arr) forl(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define forci(i,sw) for((i)=(sw).begin();(i)!=(sw).end();++(i))
#define forcr(i,sw) for((i)=(sw).rbegin();(i)!=(sw).rend();++(i))
int main(){
    int t;
    si(t);
    while(t--){
        int n;
        si(n);
        int a[n];
        fori(i,0,n){
            si(a[i]);
        }
        sort(a,a+n);
        long long ans=0;
        fori(i,0,n-1){
            ans+=abs(a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}