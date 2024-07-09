#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define REP(i,x,y) for(int i = (int)x; i <= (int)y; i++)
#define FOR(i,x,y) for(int i = (int)x; i < (int)y; i++)
#define REV(i,x,y) for(int i = (int)x; i >= (int)y; i--)
#define DBG(x) cout << #x << " = " << x << endl;
#define DGB(x) cout << #x << " = " << x << ", " << flush;
#define DGS(x) cout << #x << " = " << x << endl << flush;
#define CLR(x) memset(x, 0, sizeof(x))
#define SET(x) memset(x, -1, sizeof(x))
#define MEM(x, v) memset(x, v, sizeof(x))
#define ABS(x) ((x) < 0? -(x) : (x))
#define MAX(a,b) ((a) > (b)? (a) : (b))
#define MIN(a,b) ((a) < (b)? (a) : (b))
#define SZ(x) ((int) (x).size())
#define ALL(x) ((x).begin()), ((x).end())
#define SORT(v) sort((v).begin(), (v).end())
#define UNIQUE(v) SORT(v), (v).erase(unique((v).begin(), (v).end()), (v).end())
#define IN(x, y) ((x) & (y))
#define BIT(n) (1 << (n))
#define NIBBLE(x) ((x) & 0xf)
#define PIBBLE(x) ((x) >> 4)
#define XOR(x, y) ((x) ^ (y))
#define AND(x, y) ((x) & (y))
#define OR(x, y) ((x) | (y))
#define XNOR(x, y) ((x) ^ (y))
#define NOT(x) (!(x))
#define LT(x, y) ((x) < (y))
#define GT(x, y) ((x) > (y))
#define EQ(x, y) ((x) == (y))
#define LE(x, y) ((x) <= (y))
#define GE(x, y) ((x) >= (y))
#define TEST(x) cerr << "Test " << #x << " " << (x) << endl;
#define CHECK(x) if(!(x)) { cerr << "check failed " << #x << " = " << (x) << endl; return -1; }
#define DEBUG(x) cerr << "DEBUG: " << #x << " = " << (x) << endl;
#define DEBUGV(x) cerr << "DEBUGV: " << #x << " = " << (x) << endl;
#define DEBUGVV(x) cerr << "DEBUGVV: " << #x << " = " << (x) << endl;

#define PB push_back
#define MP make_pair
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PIIP pair<int, pair<int, int>>
#define PPP pair<const int *, const int *>
#define PLLP pair<ll, pair<int, int>>
#define PLLL pair<ll, pair<ll, ll>>
#define PLLLL pair<ll, pair<ll, pair<ll, ll>>>
#define PLLPP pair<ll, pair<pair<int, int>, pair<int, int>>>
#define PLLV pair<ll, vector<int>>
#define PLLVL pair<ll, vector<vector<int>>>
#define PLLVLL pair<ll, vector<vector<vector<int>>>>
#define PLLLLL pair<ll, vector<vector<vector<vector<int>>>>>
#define PLLLLLL pair<ll, vector<vector<vector<vector<vector<int>>>>>>
#define PLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<int>>>>>>>
#define PLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > >
#define PLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > >
#define PLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > >
#define PLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > >
#define PLLLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > > >
#define PLLLLLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > > > >
#define PLLLLLLLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > > > > >
#define PLLLLLLLLLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > > > > > >
#define PLLLLLLLLLLLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > > > > > > >
#define PLLLLLLLLLLLLLLLLLLLLLLLLLLLL pair<ll, vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<vector<int>>>>>>> > > > > > > > > > > >
#define PLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL