#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vpi vector<pair<int,int>>
#define vpl vector<pair<ll,ll>>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define MOD 1000000007
#define INF 1000000000000000000
#define EPS 1e-9
#define line cout<<endl;
#define debug(x) cout<<#x<<"="<<x<<endl;
#define debug2(x,y) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl;
#define debug3(x,y,z) cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl;
#define debug4(a,b,c,d) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<endl;
#define debug5(a,b,c,d,e) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<endl;
#define debug6(a,b,c,d,e,f) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<endl;
#define debug7(a,b,c,d,e,f,g) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<endl;
#define debug8(a,b,c,d,e,f,g,h) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<endl;
#define debug9(a,b,c,d,e,f,g,h,i) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<endl;
#define debug10(a,b,c,d,e,f,g,h,i,j) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<endl;
#define debug11(a,b,c,d,e,f,g,h,i,j,k) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<" "<<#k<<"="<<k<<endl;
#define debug12(a,b,c,d,e,f,g,h,i,j,k,l) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<" "<<#k<<"="<<k<<" "<<#l<<"="<<l<<endl;
#define debug13(a,b,c,d,e,f,g,h,i,j,k,l,m) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<" "<<#k<<"="<<k<<" "<<#l<<"="<<l<<" "<<#m<<"="<<m<<endl;
#define debug14(a,b,c,d,e,f,g,h,i,j,k,l,m,n) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<" "<<#k<<"="<<k<<" "<<#l<<"="<<l<<" "<<#m<<"="<<m<<" "<<#n<<"="<<n<<endl;
#define debug15(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<" "<<#k<<"="<<k<<" "<<#l<<"="<<l<<" "<<#m<<"="<<m<<" "<<#n<<"="<<n<<" "<<#o<<"="<<o<<endl;
#define debug16(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<" "<<#f<<"="<<f<<" "<<#g<<"="<<g<<" "<<#h<<"="<<h<<" "<<#i<<"="<<i<<" "<<#j<<"="<<j<<" "<<#k<<"="<<k<<" "<<#l<<"="<<l<<" "<<#m<<"="<<m<<" "<<#n<<"="<<n<<" "<<#o<<"="<<o<<" "<<#p<<"="<<p<<endl;
#define debug17(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q) cout<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c