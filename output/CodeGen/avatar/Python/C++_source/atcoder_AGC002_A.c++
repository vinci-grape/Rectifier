#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <deque>
#include <set>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <sstream>
#include <iomanip>
#include <complex>
#include <new>
#include <set>
using namespace std;

#define REP(i,a,b) for(int i=a;i<=b;++i)
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define ALL(a) a.begin(),a.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl ;
#define DUMPA( a, b ) cerr << #a << " = "; dump < a > ( b ) << endl ;
#define DUMPAA( a, b, c ) cerr << #a << " = "; dump < a > ( b, c ) << endl ;
#define DUMPEX( a, b, c, d ) cerr << #a << " = "; dump < a > ( b, c, d ) << endl ;
#define DUMPIN( a, b, c, d, e ) cerr << #a << " = "; dump < a > ( b, c, d, e ) << endl ;
#define DUMPLL( a, b, c, d, e, f ) cerr << #a << " = "; dump < a > ( b, c, d, e, f ) << endl ;
#define DUMPLLL( a, b, c, d, e, f, g ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g ) << endl ;
#define DUMPLLLL( a, b, c, d, e, f, g, h ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h ) << endl ;
#define DUMPLLLLL( a, b, c, d, e, f, g, h, i ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i ) << endl ;
#define DUMPLLLLLL( a, b, c, d, e, f, g, h, i, j ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j ) << endl ;
#define DUMPLLLLLLL( a, b, c, d, e, f, g, h, i, j, k ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k ) << endl ;
#define DUMPLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l ) << endl ;
#define DUMPLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m ) << endl ;
#define DUMPLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n ) << endl ;
#define DUMPLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o ) << endl ;
#define DUMPLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o, p ) << endl ;
#define DUMPLLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q ) << endl ;
#define DUMPLLLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r ) << endl ;
#define DUMPLLLLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s ) << endl ;
#define DUMPLLLLLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t ) << endl ;
#define DUMPLLLLLLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u ) << endl ;
#define DUMPLLLLLLLLLLLLLLLLLL( a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v ) cerr << #a << " = "; dump < a > ( b, c, d, e, f, g, h, i, j, k, l,