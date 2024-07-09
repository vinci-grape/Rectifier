#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <valarray>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <bitset>
#include <algorithm>
#include <utility>
#include <numeric>
#include <functional>
using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(typeof((m).begin())i=(m).begin(),i##e=(m).end();i!=i##e;++i)
#define forl(i,n) for(ll i=0,i##e=n;i<i##e;++i)
#define ford(i,n) for(double i=0,i##e=n;i<i##e;++i)
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pdd> vpdd;
typedef vector<pii>::iterator vpii_iterator;
typedef vector<pll>::iterator vpll_iterator;
typedef vector<pdd>::iterator vpdd_iterator;
typedef list<int> li;
typedef list<ll> lll;
typedef list<double> ld;
typedef list<string> ls;
typedef list<char> lc;
typedef list<pii> lpi;
typedef list<pll> lpl;
typedef list<pdd> lpd;
typedef map<int,int> mii;
typedef map<int,ll> mlli;
typedef map<int,double> mid;
typedef map<int,string> mis;
typedef map<int,char> mic;
typedef map<ll,ll> mlll;
typedef map<ll,int> mlli;
typedef map<ll,double> mld;
typedef map<ll,string> mls;
typedef map<ll,char> mlc;
typedef map<double,double> mdd;
typedef map<double,int> mid;
typedef map<double,string> mds;
typedef map<double,char> mdc;
typedef map<string,string> mss;
typedef map<string,char> msc;
typedef map<char,char> mcc;
typedef set<int> si;
typedef set<ll> sll;
typedef set<double> sd;
typedef set<string> ss;
typedef set<char> sc;
typedef set<pii> spii;
typedef set<pll> spll;
typedef set<pdd> spdd;
typedef queue<int> qi;
typedef queue<ll> qll;
typedef queue<double> qd;
typedef queue<string> qs;
typedef queue<char> qc;
typedef queue<pii> qpii;
typedef queue<pll> qpll;
typedef queue<pdd> qpdd;
typedef deque<int> di;
typedef deque<ll> dll;
typedef deque<double> dd;
typedef deque<string> ds;
typedef deque<char> dc;
typedef deque<pii> dpii;
typedef deque<pll> dpll;
typedef deque<pdd> dpdd;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pqll;
typedef priority_queue<double> pqd;
typedef priority_queue<string> pqs;
typedef priority_queue<char> pqc;
typedef priority_queue<pii> pqpii;
typedef priority_queue<pll> pqpll;
typedef priority_queue<pdd> pqpdd;
int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    while(n--){
        scanf("%d%d",&a,&b);
        if(a>b)swap(a,b);
        printf("%d\n",a+b);
    }
}