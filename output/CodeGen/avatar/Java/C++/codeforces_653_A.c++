#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <array>
#include <memory>
#include <iomanip>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(typeof((m).begin())i=(m).begin(),i##e=(m).end();i!=i##e;++i)
#define forj(j,n) for(int j=0,j##e=n;j<j##e;++j)
#define fork(k,n) for(int k=0,k##e=n;k<k##e;++k)
#define forl(l,n) for(int l=0,l##e=n;l<l##e;++l)
#define fora(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define fors(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forc(i,n) for(const auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forn(i,n) for(int i=n,i##e=0;i<i##e;++i)
#define fori(i,m) for(typeof((m).begin())i=(m).begin(),i##e=(m).end();i!=i##e;++i)
#define forj(j,n) for(int j=n,j##e=0;j<j##e;++j)
#define fork(k,n) for(int k=n,k##e=0;k<k##e;++k)
#define forl(l,n) for(int l=n,l##e=0;l<l##e;++l)
#define fora(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define fors(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forc(i,n) for(const auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forn(i,n) for(int i=n,i##e=0;i<i##e;++i)
#define fori(i,m) for(typeof((m).begin())i=(m).begin(),i##e=(m).end();i!=i##e;++i)
#define forj(j,n) for(int j=n,j##e=0;j<j##e;++j)
#define fork(k,n) for(int k=n,k##e=0;k<k##e;++k)
#define forl(l,n) for(int l=n,l##e=0;l<l##e;++l)
#define fora(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define fors(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forc(i,n) for(const auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forn(i,n) for(int i=n,i##e=0;i<i##e;++i)
#define fori(i,m) for(typeof((m).begin())i=(m).begin(),i##e=(m).end();i!=i##e;++i)
#define forj(j,n) for(int j=n,j##e=0;j<j##e;++j)
#define fork(k,n) for(int k=n,k##e=0;k<k##e;++k)
#define forl(l,n) for(int l=n,l##e=0;l<l##e;++l)
#define fora(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define fors(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forc(i,n) for(const auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forn(i,n) for(int i=n,i##e=0;i<i##e;++i)
#define fori(i,m) for(typeof((m).begin())i=(m).begin(),i##e=(m).end();i!=i##e;++i)
#define forj(j,n) for(int j=n,j##e=0;j<j##e;++j)
#define fork(k,n) for(int k=n,k##e=0;k<k##e;++k)
#define forl(l,n) for(int l=n,l##e=0;l<l##e;++l)
#define fora(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define fors(i,n) for(auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forc(i,n) for(const auto i=(n).begin(),i##e=(n).end();i!=i##e;++i)
#define forn(i,n) for(int i=n