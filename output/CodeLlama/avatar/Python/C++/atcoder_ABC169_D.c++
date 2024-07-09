#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define FOR(i,a,n) for(int i=a;i<=n;i++)
#define FORN(i,a,n) for(int i=a;i>=n;i--)
#define sortall(v) sort(all(v));
#define endl "\n"
#define pi 3.1415926535897932384626433832795
#define mod 1000000007
#define INF 1000000009
int main()
{
    fast;
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    vector<ll>fac_;
    ll x=n;
    while(x%2==0)
    {
        fac_.pb(2);
        x/=2;
    }
    ll f=3;
    while(f*f<=x)
    {
        if(x%f==0)
        {
            fac_.pb(f);
            x/=f;
        }
        else
        {
            f+=2;
        }
    }
    if(x!=1)
    {
        fac_.pb(x);
    }
    ll ans=0;
    for(auto i:fac_)
    {
        ll x=1;
        while(x<=i)
        {
            x+=i;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}