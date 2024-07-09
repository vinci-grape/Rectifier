#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define inf 1e9
#define mod 1000000007
#define N 1000000
#define M 1000000
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
#define sz(x) ((int)(x).size())
#define clr(x) memset(x, 0, sizeof(x))
#define sort(x) sort(all(x))
#define sortr(x) sort(rall(x))
#define uniq(x) x.erase(unique(all(x)), x.end())
#define find(x, y) (lower_bound(all(x), y) - x.begin())
#define cls(x) memset(x, 0, sizeof(x))
#define max(x, y) ((x)>(y)?(x):(y))
#define min(x, y) ((x)<(y)?(x):(y))
#define max3(x, y, z) max(max(x, y), z)
#define min3(x, y, z) min(min(x, y), z)
#define pb push_back
#define endl "\n"
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define trace7(a, b, c, d, e, f, g) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<endl
#define trace8(a, b, c, d, e, f, g, h) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<endl
#define trace9(a, b, c, d, e, f, g, h, i) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<endl
#define trace10(a, b, c, d, e, f, g, h, i, j) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<endl
#define trace11(a, b, c, d, e, f, g, h, i, j, k) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<" | "<<#k<<": "<<k<<endl
#define trace12(a, b, c, d, e, f, g, h, i, j, k, l) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<" | "<<#k<<": "<<k<<" | "<<#l<<": "<<l<<endl
#define trace13(a, b, c, d, e, f, g, h, i, j, k, l, m) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<" | "<<#k<<": "<<k<<" | "<<#l<<": "<<l<<" | "<<#m<<": "<<m<<endl
#define trace14(a, b, c, d, e, f, g, h, i, j, k, l, m, n) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<" | "<<#k<<": "<<k<<" | "<<#l<<": "<<l<<" | "<<#m<<": "<<m<<" | "<<#n<<": "<<n<<endl
#define trace15(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<" | "<<#k<<": "<<k<<" | "<<#l<<": "<<l<<" | "<<#m<<": "<<m<<" | "<<#n<<": "<<n<<" | "<<#o<<": "<<o<<endl
#define trace16(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<" | "<<#i<<": "<<i<<" | "<<#j<<": "<<j<<" | "<<#k<<": "<<k<<" | "<<#l<<": "<<l<<" | "<<#m<<": "<<m<<" | "<<#n<<": "<<n<<" | "<<#o<<": "<<o<<" | "<<#p<<": "<<p<<endl
#define trace17(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<" | "<<#g<<": "<<g<<" | "<<#h<<": "<<h<<"