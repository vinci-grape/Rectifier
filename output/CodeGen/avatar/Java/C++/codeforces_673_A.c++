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
#include <sstream>
#include <iomanip>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <algorithm>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP2(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++)
#define REPD(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<=(n)-i;j++)
#define REPC(i,j,a,b) for(int i=a;i<=(b);i++) for(int j=0;j<(n);j++)
#define REPX(i,n) for(int i=0;i<(n);i++)
#define REPY(i,n) for(int i=0;i<(n);i++)
#define REPZ(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP2Z(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++)
#define REP2Y(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++)
#define REP2X(i,j,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++)
#define REP3Y(i,j,k,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++)
#define REP3X(i,j,k,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++)
#define REP3Z(i,j,k,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++)
#define REP4Y(i,j,k,l,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++) for(int l=0;l<(n);l++)
#define REP4X(i,j,k,l,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++) for(int l=0;l<(n);l++)
#define REP5Y(i,j,k,l,m,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++) for(int l=0;l<(n);l++) for(int m=0;m<(n);m++)
#define REP5X(i,j,k,l,m,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++) for(int l=0;l<(n);l++) for(int m=0;m<(n);m++)
#define REP6Y(i,j,k,l,m,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++) for(int l=0;l<(n);l++) for(int m=0;m<(n);m++) for(int n=0;n<(n);n++)
#define REP6X(i,j,k,l,m,n) for(int i=0;i<(n);i++) for(int j=0;j<(n);j++) for(int k=0;k<(n);k++) for(int l=0;l<(n);l++) for(int m=0;m<(n);m++) for(int n=0;n<(n);n++)
typedef long long int64;
typedef unsigned long long uint64;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int,int> pii;
typedef pair<int,bool> pib;
typedef pair<bool,int> piv;
typedef pair<pii,pii> ppp;
typedef pair<pii,bool> ppb;
typedef pair<bool,pii> pbp;
typedef pair<pib,pib> ppb;
typedef pair<pib,bool> pbb;
typedef pair<bool,pib> pbp;
typedef pair<vvb,vvb> vvv;
typedef pair<vvb,pbb> vvp;
typedef pair<pbb,vvb> vvb;
typedef pair<vvb,pib> vvbp;
typedef pair<pib,vvb> vvbp;
typedef pair<vvb,pbb> vvbpp;
typedef pair<pbb,vvb> vvbpp;
typedef pair<pbb,pbb> pppb;
typedef pair<pbb,pib> pppb;
typedef pair<pib,pbb> pppb;
typedef pair<pib,pib> ppib;
typedef pair<pib,ppb> ppib;
typedef pair<ppb,pib> ppib;
typedef pair<pib,ppb> ppib;
typedef pair<ppb,ppb> pppb;
#define INFMX 2147483647
#define INFMN -2147483647
#define pi acos(-1.0)
#define N 1000000001
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define pii pair<int,int>
#define p