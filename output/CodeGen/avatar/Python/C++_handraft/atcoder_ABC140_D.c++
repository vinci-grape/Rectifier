#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <set>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <complex>
#include <ctime>
using namespace std;

#define mp make_pair
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define fi first
#define se second
#define sz(c) int((c).size())
#define fill(c,x) (c).fill(x)
#define srt(c) sort(all(c))
#define rev(c) reverse(all(c))
#define forn(n) for(int _n(n), _i=0; _i<_n; _i++)
#define forin(i,n) for(int _n(n), i=0; i<_n; i++)
#define forimn(i,m,n) for(int _n(n), _m(m), i=_m; i<_n; i++)
#define print(i,st,end) forin(i,sz(st)) cout<<st[i]<<" "; cout<<end<<endl
#define forimnm(i,m,n,st) for(int _n(n), _m(m), i=_m; i<_n; i++) print(i,st,end)
#define forimnmk(i,m,n,st) for(int _n(n), _m(m), i=_m; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinm(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end)
#define forinmk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmkn(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmn(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmns(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnms(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnmsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinms(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmsn(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmsnk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmsns(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmsnsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnmsns(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnmsnsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnmsn(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnmsnk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnmsnns(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnmsnnsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnmsnnsns(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnmsnnsnsk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<" "
#define forinmnmsnnsn(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i,st,end),cout<<st[i]<<endl
#define forinmnmsnnsnk(i,n,st) for(int _n(n), i=0; i<_n; i++) print(i