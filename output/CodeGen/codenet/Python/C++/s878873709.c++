#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <ctime>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <vector>
#include <complex>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <iomanip>
using namespace std;

#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(int i=0,i##e=m;i<i##e;++i)
#define forj(j,n) for(int j=0,j##e=n;j<j##e;++j)
#define fork(k,n) for(int k=0,k##e=n;k<k##e;++k)
#define forl(l,n) for(int l=0,l##e=n;l<l##e;++l)
#define fora(i,n) for(auto i=all(n);i;i--)
#define forc(i,n) for(char i='0';i<='9';i++)
#define ford(i,n) for(double i=0;i<n;i++)
#define fore(i,n) for(;i<n;i++)
#define fors(i,n) for(short i=0;i<n;i++)
#define forp(i,n) for(int *i=all(n);i;i--)
#define forr(i,n) for(int i=n-1;i>=0;i--)
#define forn(i,n) for(int i=n;i>=0;i--)
#define form(i,n) for(int i=0;i<n;i++)
#define foro(i,n) for(int i=n-1;i>=0;i--)
#define forl(i,n) for(long i=n-1;i>=0;i--)
#define forx(i,n) for(int i=n-1;i>=0;i--)
#define fory(i,n) for(int i=0;i<n;i++)
#define forz(i,n) for(size_t i=n-1;i>=0;i--)
#define forq(i,n) for(size_t i=0;i<n;i++)
#define forw(i,n) for(wchar_t i=n-1;i>=0;i--)
#define forb(i,n) for(bool i=n-1;i>=0;i--)
#define forc(i,n) for(char i=n-1;i>=0;i--)
#define ford(i,n) for(double i=n-1;i>=0;i--)
#define fore(i,n) for(;i<n;i++)
#define fors(i,n) for(short i=n-1;i>=0;i--)
#define forp(i,n) for(int *i=n;i>=0;i--)
#define forr(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n;i>=0;i--)
#define form(i,n) for(int i=0;i<n;i++)
#define foro(i,n) for(int i=n;i>=0;i--)
#define forl(i,n) for(long i=0;i<n;i++)
#define forx(i,n) for(size_t i=0;i<n;i++)
#define fory(i,n) for(size_t i=n;i>=0;i--)
#define forz(i,n) for(size_t i=n;i>=0;i--)
#define forq(i,n) for(size_t i=0;i<n;i++)
#define forw(i,n) for(wchar_t i=0;i<n;i++)
#define forb(i,n) for(bool i=0;i<n;i++)
#define forc(i,n) for(char i=0;i<n;i++)
#define ford(i,n) for(double i=0;i<n;i++)
#define fore(i,n) for(;i<n;i++)
#define fors(i,n) for(short i=0;i<n;i++)
#define forp(i,n) for(int *i=0;i<n;i++)
#define forr(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n;i>=0;i--)
#define form(i,n) for(int i=0;i<n;i++)
#define foro(i,n) for(int i=n;i>=0;i--)
#define forl(i,n) for(long i=0;i<n;i++)
#define forx(i,n) for(size_t i=0;i<n;i++)
#define fory(i,n) for(size_t i=n;i>=0;i--)
#define forz(i,n) for(size_t i=n;i>=0;i--)
#define forq(i,n) for(size_t i=0;i<n;i++)
#define forw(i,n) for(wchar_t i=n-1;i>=0;i--)
#define forb(i,n) for(bool i=n-1;i>=0;i--)
#define forc(i,n) for(char i=n-1;i>=0;i--)
#define ford(i,n) for(double i=n-1;i>=0;i--)
#define fore(i,n) for(;i<n;i++)
#define fors(i,n) for(short i=n-1;i>=0;i--)
#define forp(i,n) for(int *i=n;i>=0;i--)
#define forr(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n;i>=0;i--)
#define form(i,n) for(int i=0;i<n;i++)
#define foro(i,n) for(int i=n;i>=0;i--)
#define forl(i,n) for(long i=0;i<n;i++)
#define forx(i,n) for(size_t i=0;i<n;i++)
#define fory(i,n) for(size_t i=n;i>=0;i--)
#define forz(i,n) for(