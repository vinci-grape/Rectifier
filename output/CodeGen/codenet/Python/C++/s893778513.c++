#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <functional>
#include <bitset>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cassert>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<ll, pair<ll,ll> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define LB(x) ((x)&(-(x)))
#define RB(x) ((x)&(x))
#define UB(x) ((x)&(~(x)))
#define PB(x) ((x)&(1<<(x)))
#define SB(x) ((x)&(1<<(x+1)))
#define TB(x) ((x)&(1<<(x+2)))
#define BM(x) (1<<(x))
#define GM(x) (1<<(x-1))
#define IM(x) (1<<(x))
#define PM(x) (1<<(x+1))
#define QM(x) (1<<(x+2))
#define RM(x) (1<<(x+3))
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define FORE(i,a,b) for(int i=a;i<b;i++)
#define VAR(v,i) __typeof(i) v=(i)
#define FORE_ALL(i,a,b) for(int i=a;i<b;i++)
#define FORALL(i,a,b) for(int i=a;i<b;i++)
#define FORE_COND(i,a,b,c) for(int i=a;i<b;i++) if(c)
#define FORALL_COND(i,a,b,c) for(int i=a;i<b;i++) if(c)
#define FORALL_REV(i,a,b) for(int i=a;i>=b;i--)
#define FORALL_REV_COND(i,a,b,c) for(int i=a;i>=b;i--) if(c)
#define IN(a,b) ((b).find(a)!=(b).end())
#define REV(a,b) for(int i=a;i>=b;i--)
#define REV_COND(a,b,c) for(int i=a;i>=b;i--) if(c)
#define REV_COND_REV(a,b,c) for(int i=a;i>=b;i--) if(c)
#define L_R(a,b) for(int i=a;i<b;i++)
#define R_R(a,b) for(int i=a;i>b;i--)
#define L_R_R(a,b,c) for(int i=a;i<b;i++) for(int j=c;j>0;j--)
#define R_R_R(a,b,c) for(int i=a;i>b;i--) for(int j=c;j>0;j--)
#define L_R_R_R(a,b,c,d) for(int i=a;i<b;i++) for(int j=c;j>d;j--)
#define R_R_R_R(a,b,c,d) for(int i=a;i>b;i--) for(int j=c;j>d;j--)
#define L_R_R_R_R(a,b,c,d,e) for(int i=a;i<b;i++) for(int j=c;j>d;j--) for(int k=e;k>0;k--)
#define R_R_R_R_R(a,b,c,d,e) for(int i=a;i>b;i--) for(int j=c;j>d;j--) for(int k=e;k>0;k--)
#define L_R_R_R_R_R(a,b,c,d,e,f) for(int i=a;i<b;i++) for(int j=c;j>d;j--) for(int k=e;k>f;k--)
#define R_R_R_R_R_R(a,b,c,d,e,f) for(int i=a;i>b;i--) for(int j=c;j>d;j--) for(int k=e;k>f;k--)
#define L_R_R_R_R_R_R(a,b,c,d,e,f,g) for(int i=a;i<b;i++) for(int j=c;j>d;j--) for(int k=e;k>f;k--) for(int l=g;l>0;l--)
#define R_R_R_R_R_R_R(a,b,c,d,e,f,g) for(int i=a;i>b;i--) for(int j=c;j>d;j--) for(int k=e;k>f;k--) for(int l=g;l>0;l--)
#define L_R_R_R_R_R_R_R(a,b,c,d,e,f,g,h) for(int i=a;i<b;i++) for(int j=c;j>d;j--) for(int k=e;k>f;k--) for(int l=g;l>h;l--)
#define R_R_R_R_R_R_R_R(a,b,c,d,e,f,g,h) for(int i=a;i>b;i--) for(int j=c;j>d;j--) for(int k=e;k>f;k--) for(int l=g;l>h;l--)
#define L_R_R_R_R_R_R_R_R(a,b,c,d,e,f,g,h,i) for(int i=a;i<b;i++) for(int j=c;j>d;j--) for(int k=e;k>f;k--) for(int l=g;l>h;l--) for(int m=i;m>0;m--)
#define R_R_R_R_R_R_R_R_R(a,b,c,d,e,f,g,h,i) for(int i=a;i>b;i--) for(int j=c;j>d;j--) for(int k=e;k>f;k--) for(int l=g;l>h;l--) for(int m=i;m>0;m--)
#define L_R_R_R_R_R_R_R_R_R(a,b,c,