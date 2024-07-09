#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <ctype.h>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <cfloat>
#include <cctype>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)((c).size())
#define clr(a,b) memset(a,b,sizeof(a))
#define it iterator
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<pii> vpii;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<vd> vvd;
typedef vector<vs> vvs;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<pii> vpii;
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)((c).size())
#define clr(a,b) memset(a,b,sizeof(a))
#define it iterator
#define rep(i,a,b) for(int i=a;i<b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
#define vi vector<int>
#define vvl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vd vector<double>
#define vpii vector<pii>
#define vvi vector<vi>
#define vvl vector<vl>
#define vvd vector<vd>
#define vvs vector<vs>
#define vvc vector<vc>
#define vvb vector<vb>
#define vvpii vector<vpii>
#define vvvi vector<vvi>
#define vvvl vector<vvl>
#define vvvd vector<vvd>
#define vvvs vector<vvs>
#define vvvc vector<vvc>
#define vvvb vector<vvb>
#define vvvpii vector<vvpii>
#define vvvvi vector<vvvi>
#define vvvvl vector<vvvl>
#define vvvvd vector<vvvd>
#define vvvvs vector<vvvs>
#define vvvvc vector<vvvc>
#define vvvvb vector<vvvb>
#define vvvvpii vector<vvvpii>
#define vvvvvi vector<vvvvi>
#define vvvvvl vector<vvvvl>
#define vvvvvd vector<vvvvd>
#define vvvvvs vector<vvvvs>
#define vvvvvc vector<vvvvc>
#define vvvvvb vector<vvvvb>
#define vvvvvpii vector<vvvvpii>
#define vvvvvvi vector<vvvvvi>
#define vvvvvvl vector<vvvvvl>
#define vvvvvvd vector<vvvvvd>
#define vvvvvvs vector<vvvvvs>
#define vvvvvvc vector<vvvvvc>
#define vvvvvvb vector<vvvvvb>
#define vvvvvvpii vector<vvvvvpii>
#define vvvvvvvi vector<vvvvvvi>
#define vvvvvvvl vector<vvvvvvl>
#define vvvvvvvd vector<vvvvvvd>
#define vvvvvvvs vector<vvvvvvs>
#define vvvvvvvc vector<vvvvvvc>
#define vvvvvvvb vector<vvvvvvb>
#define vvvvvvvpii vector<vvvvvvpii>
#define vvvvvvvvi vector<vvvvvvvi>
#define vvvvvvvvl vector<vvvvvvvl>
#define vvvvvvvvd vector<vvvvvvvd>
#define vvvvvvvvs vector<vvvvvvvs>
#define vvvvvvvvc vector<vvvvvvvc>
#define vvvvvvvvb vector<vvvvvvvb>
#define vvvvvvvvpii vector<vvvvvvvpii>
#define vvvvvvvvvi vector<vvvvvvvvi>
#define vvvvvvvvvl vector<vvvvvvvvl>
#define vvvvvvvvvd vector<vvvvvvvvd>
#define vvvvvvvvvs vector<vvvvvvvvs>
#define vvvvvvvvvc vector<vvvvvvvvc>
#define vvvvvvvvvb vector<vvvvvvvvb>
#define vvvvvvvvvpii vector<vvvvvvvvpii>
#define vvvvvvvvvvi vector<vvvvvvvvvi>
#define vvvvvvvvvvl vector<vvvvvvvvvl>
#define vvvvvvvvvvd vector<vvvvvvvvvd>
#define vvvvvvvvvvs vector<vvvvvvvvvs>
#define vvvvvvvvvvc vector<vvvvvvvvvc>
#define vvvvvvvvvvb vector<vvvvvvvvvb>
#define vvvvvvvvvvpii vector<vvvvvvvvvpii>
#define vvvvvvvvvvvi vector<vvvvvvvvvvi>
#define vvvvvvvvvvvl vector<vvvvvvvvvvl>
#define vvvvvvvvvvvd vector<vvvvvvvvvvd>
#define vvvvvvvvvvvs vector<vvvvvvvvvvs>
#define vvvvvvvvvvvc vector<vvvvvvvvvvc>
#define vvvvvvvvvvvb vector<vvvvvvvvvvb>
#define vvvvvvvvvvvpii vector<vvvvvvvvvvpii>
#define vvvvvvvvvvvvi vector<vvvvvvvvvvvi>
#define vvvvvvvvvvvvl vector<vvvvvvvvvvvl>
#define vvvvvvvvvvvvd vector<vvvvvvvvvvvd>
#define v