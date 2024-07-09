#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int,int>
#define pl pair<long long,long long>
#define all(x) x.begin(),x.end()
#define sz(x) (int)(x.size())
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define rrep1(i,n) for(int i=n;i>=1;i--)
#define endl "\n"
#define INF 1000000000
#define MOD 1000000007
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}
ll power(ll x,ll y,ll p){ll res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll sigma(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i:-i;return res;}
ll sigma1(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i:0;return res;}
ll sigma2(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?i:0;return res;}
ll sigma3(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?0:i;return res;}
ll sigma4(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?0:i;return res;}
ll sigma5(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i:-i*i;return res;}
ll sigma6(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i:0;return res;}
ll sigma7(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?i*i:0;return res;}
ll sigma8(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?0:i*i;return res;}
ll sigma9(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?0:i*i;return res;}
ll sigma10(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i*i:-i*i*i;return res;}
ll sigma11(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i*i:0;return res;}
ll sigma12(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?i*i*i:0;return res;}
ll sigma13(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?0:i*i*i;return res;}
ll sigma14(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?0:i*i*i;return res;}
ll sigma15(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i*i*i:-i*i*i*i;return res;}
ll sigma16(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i*i*i:0;return res;}
ll sigma17(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?i*i*i*i:0;return res;}
ll sigma18(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?0:i*i*i*i;return res;}
ll sigma19(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?0:i*i*i*i;return res;}
ll sigma20(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i*i*i*i:-i*i*i*i*i;return res;}
ll sigma21(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?i*i*i*i*i:0;return res;}
ll sigma22(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==1)?i*i*i*i*i:0;return res;}
ll sigma23(ll n){ll res=0;for(ll i=1;i<=n;i++)res+=(i%2==0)?0:i*i*i*i*i;return res;}
ll sigma24(ll n){ll res=