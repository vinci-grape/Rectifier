#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <set>
using namespace std;

#define ll long long
#define ull unsigned long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define FORE(i,a,b) for(int i=a;i<b;i++)
#define VAR(i,a,b) __typeof(a) i=(a);b;
#define MOD(a,b) a%b
#define SZ(a) ((int)a.size())
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a))
#define REV(a) a.rbegin(),a.rend()
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define MIN(a,b) (a<b?a:b)
#define MAX(a,b) (a>b?a:b)
#define SET(a,b) memset(a,b,sizeof(a))
#define MEM(a,x) memset(a,x,sizeof(a))
#define ABS(x) ((x)<0?-(x):(x))
#define PI 3.1415926535897932384626433832795
#define EPS 1e-9
#define INF 0x7FFFFFFF
#define INFLL 0x7FFFFFFFFFFFFFFFLL
#define ceildiv(a,b) ((a)%(b)==0?(a)/(b):((a)/(b))+1)
#define FLOORDIV(a,b) ((a)<(b)?(a)/(b):((a)-(b)+1)/(b))
#define tr(container,it) for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)
#define present(container,x) (binary_search(ALL(container), x))
#define cpresent(container,x) (binary_search(ALL(container), x) && (container).find(x)!= (container).end())
#define cmp(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp2(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp3(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp4(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp5(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp6(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp7(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp8(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp9(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp10(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp11(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp12(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp13(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp14(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp15(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp16(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp17(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp18(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp19(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp20(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp21(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp22(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp23(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp24(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp25(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp26(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp27(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp28(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp29(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp30(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp31(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp32(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp33(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp34(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp35(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp36(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp37(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp38(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp39(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp40(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp41(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp42(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp43(a,b) (a < b? -1 : a == b? 0 : 1)
#define cmp44(a,b) (a < b? -1 : a == b? 0 :