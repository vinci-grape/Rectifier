#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <stack>
#include <list>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <cassert>
#include <ctime>
#include <cstdlib>
using namespace std;

#define DEBUG
#ifdef DEBUG
#define debug(x) cout << #x << " = " << x << endl;
#else
#define debug(x)
#endif

#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(a) int((a).size())
#define szr(a) int((a).size())
#define pb push_back
#define ins insert
#define cr(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define ci(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define cl(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define cll(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define set(a) memset(a,0,sizeof(a))
#define rep(i,n) for(i=0;i<(n);i++)
#define repi(i,n) for(int i=(n)-1;i>=0;i--)
#define reps(i,n) for(i=n-1;i>=0;i--)
#define forit(i,a) for(__typeof((a).begin()) i=(a).begin();i!=(a).end();i++)
#define foritr(i,a) for(__typeof((a).rbegin()) i=(a).rbegin();i!=(a).rend();i++)
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<ll, pair<int,int> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define mp make_pair
#define fi first
#define se second
#define sz(a) int((a).size())
#define szr(a) int((a).size())
#define pb push_back
#define ins insert
#define cr(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define ci(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define cl(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define cll(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define set(a) memset(a,0,sizeof(a))
#define rep(i,n) for(i=0;i<(n);i++)
#define repi(i,n) for(int i=(n)-1;i>=0;i--)
#define reps(i,n) for(i=n-1;i>=0;i--)
#define forit(i,a) for(__typeof((a).begin()) i=(a).begin();i!=(a).end();i++)
#define foritr(i,a) for(__typeof((a).rbegin()) i=(a).rbegin();i!=(a).rend();i++)
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<ll, pair<int,int> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define mp make_pair
#define fi first
#define se second
#define sz(a) int((a).size())
#define szr(a) int((a).size())
#define pb push_back
#define ins insert
#define cr(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define ci(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define cl(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define cll(a,b) cout << #a << " = " << a << "," << #b << " = " << b << endl;
#define set(a) memset(a,0,sizeof(a))
#define rep(i,n) for(i=0;i<(n);i++)
#define repi(i,n) for(int i=(n)-1;i>=0;i--)
#define reps(i,n) for(i=n-1;i>=0;i--)
#define forit(i,a) for(__typeof((a).begin()) i=(a).begin();i!=(a).end();i++)
#define foritr(i