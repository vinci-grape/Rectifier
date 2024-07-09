#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <complex>
#include <climits>

using namespace std;

#define LL long long
#define F first
#define S second
#define PB push_back
#define PF push_front
#define MP make_pair
#define REP(x, n) for(int x=0; x<(n); ++x)
#define REP2(x, i, j) for(int x=i; x<=(j); ++x)
#define REPD(x, j, i) for(int x=j; x>=(i); --x)
#define REPC(x, j, i, n) for(int x=j; x>=(i); --x)
#define foreach(c, itr) for(__typeof((c).begin()) itr=(c).begin(); itr!=(c).end(); ++itr)
#define DEBUG(x) cerr << #x << " = " << (x) << "(L" << __LINE__ << ")" << __FILE__ << endl;
#define DUMPA(a, n) cerr << #a << " = {" << a[0]; re#a {for (int i = 1; i < n; i++) cerr << ", " << a[i]; cerr << "}" << endl;
#define DUMPAA(a, n, m) rep#a {REP(i, n) {REP(j, m) cerr << a[i][j]; cerr << endl;}}
#define ALL(a) begin(a), end(a)
#define UNIQUE(a) sort(ALL(a)), a.erase(unique(ALL(a)), a.end())

typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<string> VS;
typedef pair<int, int> PII;

inline int toInt( string s ){int v; istringstream sin(s);sin >> v;return v;}
template<class T> inline string toString( T x ){ostringstream sout;sout<<x;return sout.str();}

int main(){
    int n, a, pos;
    cin >> n;
    n = n - 1;
    int nn = n;
    int nn2 = nn * 2;
    int nn3 = nn * 3;
    int nn4 = nn * 4;
    int nn5 = nn * 5;
    int nn6 = nn * 6;
    int nn7 = nn * 7;
    int nn8 = nn * 8;
    int nn9 = nn * 9;
    int nn10 = nn * 10;
    int nn11 = nn * 11;
    int nn12 = nn * 12;
    int nn13 = nn * 13;
    int nn14 = nn * 14;
    int nn15 = nn * 15;
    int nn16 = nn * 16;
    int nn17 = nn * 17;
    int nn18 = nn * 18;
    int nn19 = nn * 19;
    int nn20 = nn * 20;
    int nn21 = nn * 21;
    int nn22 = nn * 22;
    int nn23 = nn * 23;
    int nn24 = nn * 24;
    int nn25 = nn * 25;
    int nn26 = nn * 26;
    int nn27 = nn * 27;
    int nn28 = nn * 28;
    int nn29 = nn * 29;
    int nn30 = nn * 30;
    int nn31 = nn * 31;
    int nn32 = nn * 32;
    int nn33 = nn * 33;
    int nn34 = nn * 34;
    int nn35 = nn * 35;
    int nn36 = nn * 36;
    int nn37 = nn * 37;
    int nn38 = nn * 38;
    int nn39 = nn * 39;
    int nn40 = nn * 40;
    int nn41 = nn * 41;
    int nn42 = nn * 42;
    int nn43 = nn * 43;
    int nn44 = nn * 44;
    int nn45 = nn * 45;
    int nn46 = nn * 46;
    int nn47 = nn * 47;
    int nn48 = nn * 48;
    int nn49 = nn * 49;
    int nn50 = nn * 50;
    int nn51 = nn * 51;
    int nn52 = nn * 52;
    int nn53 = nn * 53;
    int nn54 = nn * 54;
    int nn55 = nn * 55;
    int nn56 = nn * 56;
    int nn57 = nn * 57;
    int nn58 = nn * 58;
    int nn59 = nn * 59;
    int nn60 = nn * 60;
    int nn61 = nn * 61;
    int nn62 = nn * 62;
    int nn63 = nn * 63;
    int nn64 = nn * 64;
    int nn65 = nn * 65;
    int nn66 = nn * 66;
    int nn67 = nn * 67;
    int nn68 = nn * 68;
    int nn69 = nn * 69;
    int nn70 = nn * 70;
    int nn71 = nn * 71;
    int nn72 = nn * 72;
    int nn73 = nn * 73;
    int nn74 = nn * 74;
    int nn75 = nn * 75;
    int nn76 = nn * 76;
    int nn77 = nn * 77;
    int nn78 = nn * 78;
    int nn79 = nn * 79;
    int nn80 = nn * 80;
    int nn81 = nn * 81;
    int nn82 = nn * 82;
    int nn83 = nn * 83;
    int nn84 = nn * 84;
    int nn85 = nn * 85;
    int nn86 = nn * 86;
    int nn87 = nn * 87;
    int nn88 = nn * 88;
    int nn89 = nn * 89;
    int nn90 = nn * 90;
    int nn91 = nn * 91;
    int nn92 = nn * 92;
    int nn93 = nn * 93;
    int nn94 = nn * 94;
    int nn95 = nn * 95;
    int nn96 = nn * 96;
    int nn97 = nn * 97;
    int nn98 = nn * 98;
    int nn99 = nn * 99;
    int nn100 = nn * 100;
    int nn101 = nn * 101;
    int nn102 = nn * 102;
    int nn103 = nn * 103;
    int nn104 = nn * 104;
    int nn105 = nn * 105;
    int nn106 = nn * 106;
    int nn107 = nn * 107;
    int nn108 = n