#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <ctime>
#include <cfloat>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cctype>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(int i=0,i##e=m.size();i<i##e;++i)
#define forj(j,m) for(int j=0,j##e=m.size();j<j##e;++j)
#define fork(k,m) for(int k=0,k##e=m.size();k<k##e;++k)
#define forl(l,m) for(int l=0,l##e=m.size();l<l##e;++l)
#define fora(i,n) for(auto i=all(n);i;i--)
#define forc(i,n) for(char i='0';i<='9';i++)
#define ford(i,n) for(double i=0,i##e=1;i<i##e;i*=1.1)
#define fore(i,n) for(__typeof(n.begin()) i=n.begin();i!=n.end();i++)
#define forg(i,n) for(__typeof(n.begin()) i=n.begin();i!=n.end();i--)
#define forh(i,n) for(__typeof(n.begin()) i=n.begin();i!=n.end();i+=2)
#define forn(i,n) for(int i=n,i##e=0;i<i##e;i++)
#define forr(i,n) for(int i=n-1;i>=0;i--)
#define forrr(i,n,r) for(int i=n-1;i>=r;i--)
#define forrrr(i,n,r,r2) for(int i=n-1;i>=r && i>=r2;i--)
#define forrrrr(i,n,r,r2,r3) for(int i=n-1;i>=r && i>=r2 && i>=r3;i--)
#define forrrrrr(i,n,r,r2,r3,r4) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4;i--)
#define forrrrrrr(i,n,r,r2,r3,r4,r5) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5;i--)
#define forrrrrrrr(i,n,r,r2,r3,r4,r5,r6) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6;i--)
#define forrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7;i--)
#define forrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7 && i>=r8;i--)
#define forrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7 && i>=r8 && i>=r9;i--)
#define forrrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9,r10) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7 && i>=r8 && i>=r9 && i>=r10;i--)
#define forrrrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7 && i>=r8 && i>=r9 && i>=r10 && i>=r11;i--)
#define forrrrrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7 && i>=r8 && i>=r9 && i>=r10 && i>=r11 && i>=r12;i--)
#define forrrrrrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13) for(int i=n-1;i>=r && i>=r2 && i>=r3 && i>=r4 && i>=r5 && i>=r6 && i>=r7 && i>=r8 && i>=r9 && i>=r10 && i>=r11 && i>=r12 && i>=r13;i--)
#define forrrrrrrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9