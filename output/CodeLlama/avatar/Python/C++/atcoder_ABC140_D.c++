#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define f first
#define s second
#define endl "\n"
#define mod 1000000007
#define inf 1e18
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vpll vector<pll>
#define vpii vector<pii>
#define umap unordered_map
#define uset unordered_set
#define all(v) (v).begin(),(v).end()
#define debug(x) cout<<#x<<" : "<<x<<endl;
#define debug2(x,y) cout<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<" "<<#z<<" : "<<z<<endl;
#define debugarr(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define debug2arr(a,b,n) for(int i=0;i<n;i++) cout<<a[i]<<" "<<b[i]<<" "; cout<<endl;
#define debug3arr(a,b,c,n) for(int i=0;i<n;i++) cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "; cout<<endl;
#define debugarr2(a,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "; cout<<endl;
#define debug2arr2(a,b,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<b[i].f<<" "<<b[i].s<<" "; cout<<endl;
#define debug3arr2(a,b,c,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<b[i].f<<" "<<b[i].s<<" "<<c[i].f<<" "<<c[i].s<<" "; cout<<endl;
#define debugarr3(a,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "; cout<<endl;
#define debug2arr3(a,b,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "; cout<<endl;
#define debug3arr3(a,b,c,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "<<c[i].f<<" "<<c[i].s<<" "<<c[i].t<<" "; cout<<endl;
#define debugarr4(a,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "; cout<<endl;
#define debug2arr4(a,b,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "<<b[i].u<<" "; cout<<endl;
#define debug3arr4(a,b,c,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "<<b[i].u<<" "<<c[i].f<<" "<<c[i].s<<" "<<c[i].t<<" "<<c[i].u<<" "; cout<<endl;
#define debugarr5(a,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<a[i].v<<" "; cout<<endl;
#define debug2arr5(a,b,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<a[i].v<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "<<b[i].u<<" "<<b[i].v<<" "; cout<<endl;
#define debug3arr5(a,b,c,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<a[i].v<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "<<b[i].u<<" "<<b[i].v<<" "<<c[i].f<<" "<<c[i].s<<" "<<c[i].t<<" "<<c[i].u<<" "<<c[i].v<<" "; cout<<endl;
#define debugarr6(a,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<a[i].v<<" "<<a[i].w<<" "; cout<<endl;
#define debug2arr6(a,b,n) for(int i=0;i<n;i++) cout<<a[i].f<<" "<<a[i].s<<" "<<a[i].t<<" "<<a[i].u<<" "<<a[i].v<<" "<<a[i].w<<" "<<b[i].f<<" "<<b[i].s<<" "<<b[i].t<<" "<<b[i