#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <valarray>
#include <cmath>
#include <ctime>
#include <cassert>
using namespace std;

#define DEBUG
#define pb push_back
#define mp make_pair
#define hashmap hash_map
#define hashset hash_set
#define fi first
#define se second
#define FOR(i,n) for(int i=0;i<(n);i++)
#define FORR(i,n) for(int i=(n)-1;i>=0;i--)
#define forall(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define SET(v,d) memset(v, d, sizeof(v))
#define CLR(v) memset(v, 0, sizeof(v))
#define INF 1000000000
#define EPS 1e-9
#define PI acos(-1.0)
#define UP(i,n) for(int i=1;i<=n;i++)
#define DOWN(i,n) for(int i=n;i>=1;i--)
#define PR(i,n) for(int i=n-1;i>=0;i--)
#define DB(x) cerr << #x << " = " << x << endl
#define DB1(x,y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl
#define DB2(x,y,z) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl
#define DB3(x,y,z,w) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << ", " << #w << " = " << w << endl
#define DB4(x,y,z,w,v) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << ", " << #w << " = " << w << ", " << #v << " = " << v << endl
#define DB5(x,y,z,w,v,u) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << ", " << #w << " = " << w << ", " << #v << " = " << v << ", " << #u << " = " << u << endl
#define DB6(x,y,z,w,v,u,r) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << ", " << #w << " = " << w << ", " << #v << " = " << v << ", " << #u << " = " << u << ", " << #r << " = " << r << endl
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define SZ size()
#define CLR clear()
#define SET set()
#define ECH(e,x) copy(all(e),ostream_iterator<decltype(x)>(cout,"\n"));
#define RESET(e) fill(all(e),0);
#define X first
#define Y second
#define SSC(e) scanf("%d",&e)
#define SSI(e) scanf("%d",&e)
#define SSC2(e,f) scanf("%d %d",&e,&f)
#define SSI2(e,f) scanf("%d %d",&e,&f)
#define SSC3(e,f,g) scanf("%d %d %d",&e,&f,&g)
#define SSI3(e,f,g) scanf("%d %d %d",&e,&f,&g)
#define SSC4(e,f,g,h) scanf("%d %d %d %d",&e,&f,&g,&h)
#define SSI4(e,f,g,h) scanf("%d %d %d %d",&e,&f,&g,&h)
#define SSC5(e,f,g,h,i) scanf("%d %d %d %d %d",&e,&f,&g,&h,&i)
#define SSI5(e,f,g,h,i) scanf("%d %d %d %d %d",&e,&f,&g,&h,&i)
#define SSC6(e,f,g,h,i,j) scanf("%d %d %d %d %d %d",&e,&f,&g,&h,&i,&j)
#define SSI6(e,f,g,h,i,j) scanf("%d %d %d %d %d %d",&e,&f,&g,&h,&i,&j)
#define SSC7(e,f,g,h,i,j,k) scanf("%d %d %d %d %d %d %d",&e,&f,&g,&h,&i,&j,&k)
#define SSI7(e,f,g,h,i,j,k) scanf("%d %d %d %d %d %d %d",&e,&f,&g,&h,&i,&j,&k)
#define SSC8(e,f,g,h,i,j,k,l) scanf("%d %d %d %d %d %d %d %d",&e,&f,&g,&h,&i,&j,&k,&l)
#define SSI8(e,f,g,h,i,j,k,l) scanf("%d %d %d %d %d %d %d %d",&e,&f,&g,&h,&i,&j,&k,&l)
#define SSC9(e,f,g,h,i,j,k,l,m) scanf("%d %d %d %d %d %d %d %d %d",&e,&f,&g,&h,&i,&j,&k,&l,&m)
#define SSI9(e,f,g,h,i,j,k,l,m) scanf("%