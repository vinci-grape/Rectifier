#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <ctime>
#include <climits>
#include <cassert>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <deque>
#include <functional>
#include <numeric>
#include <utility>
#include <bitset>
#include <cstdint>
#include <cstdlib>
using namespace std;

#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(int i=0,i##e=m.size();i<i##e;++i)
#define forj(j,m) for(int j=0,j##e=m.size();j<j##e;++j)
#define fork(k,m) for(int k=0,k##e=m.size();k<k##e;++k)
#define forl(l,m) for(int l=0,l##e=m.size();l<l##e;++l)
#define sc(c) c
#define pf printf
#define sf scanf
#define pb push_back
#define bitcount(x) __builtin_popcount(x)
#define bitmaxl(x) (__builtin_popcount(x) == 1? __builtin_ctz(x) : __builtin_clz(x))
#define bitmax(x) __builtin_ctz(x)
#define bitmin(x) __builtin_ctz(x)
#define bitpos(x) __builtin_ctz(x)
#define debug(x) cout << #x << " = " << x << endl
#define debugv(x) cout << #x << " = ";for(i,x.size())cout << x[i] << " ";cout << endl
#define paii pair<int,int>
#define paiiii pair<int,int>
#define pll pair<ll,ll>
#define pss pair<string,string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<int,pair<int,int>>
#define pddd pair<double,pair<double,double>>
#define ff(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define ffii(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define ffll(i,n) for(ll i=0,i##e=n;i<i##e;++i)
#define ffl(i,n) for(ll i=0,i##e=n;i<i##e;++i)
#define ffc(i,n) for(char i=0,i##e=n;i<i##e;++i)
#define ffr(i,n) for(char i=0,i##e=n;i<i##e;++i)
#define ffi(i,n) for(char i=0,i##e=n;i<i##e;++i)
#define fflc(i,n) for(ll i=0,i##e=n,lc=0;i<i##e;++i)
#define ffrr(i,n) for(ll i=n-1;i>=0;--i)
#define ffrl(i,n) for(ll i=n-1;i>=0;--i)
#define ffrlc(i,n) for(ll i=n-1,lc=0;i>=0;--i)
#define ffcr(i,n) for(char i=n-1;i>=0;--i)
#define ffcl(i,n) for(char i=n-1;i>=0;--i)
#define ffclc(i,n) for(char i=n-1,lc=0;i>=0;--i)
#define ffcll(i,n) for(ll i=n-1;i>=0;--i)
#define ffllr(i,n) for(ll i=n-1;i>=0;--i)
#define fflll(i,n) for(ll i=n-1;i>=0;--i)
#define fflllc(i,n) for(ll i=n-1,lc=0;i>=0;--i)
#define ffllrr(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrl(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrlc(i,n) for(ll i=n-1,lc=0;i>=0;i--)
#define ffllrrr(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrl(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrlc(i,n) for(ll i=n-1,lc=0;i>=0;i--)
#define ffllrrrr(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrl(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrlc(i,n) for(ll i=n-1,lc=0;i>=0;i--)
#define ffllrrrrr(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrrl(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrrlc(i,n) for(ll i=n-1,lc=0;i>=0;i--)
#define ffllrrrrrr(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrrrl(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrrrlc(i,n) for(ll i=n-1,lc=0;i>=0;i--)
#define ffllrrrrrrr(i,n) for(ll i=n-1;i>=0;i--)
#define ffllrrrrrrrl(i,n) for(ll i=n-1;i>=0;i--)
#