#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ll n;
    cin>>n;
    ll c[n];
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
    }
    sort(c,c+n,greater<ll>());
    ll b=pow(2,2*n-2,mod);
    ll a=2*b%mod;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans=(ans+c[i]*(a+i*b))%mod;
    }
    cout<<ans<<endl;
    return 0;
}