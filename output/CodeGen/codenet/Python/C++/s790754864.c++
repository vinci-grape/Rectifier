#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cassert>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

#define mp make_pair
#define pb push_back
#define INF 1000000000000
#define EPS 1e-9
#define bit(n) (1<<(n))
#define all(v) (v).begin(),(v).end()
#define sz(v) ((int)(v).size())
#define len(v) ((int)(v).length())
#define forn(i,n) for(int i=0,_=n;i<_;i++)
#define fori(i,n) for(int i=0,_=n;i<_;i++)
#define forj(i,n) for(int i=0,_=n;i<_;i++)
#define fork(i,n) for(int i=0,_=n;i<_;i++)
#define forl(i,n) for(int i=0,_=n;i<_;i++)
#define scani(a) scanf("%d",&a);
#define scanii(a,b) scanf("%d %d",&a,&b);
#define scaniii(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define scaniiii(a,b,c,d) scanf("%d %d %d %d",&a,&b,&c,&d);
#define scaniiio(a,b,c,d,e) scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
#define scaniiip(a,b,c,d,e,f) scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
#define scaniipp(a,b,c,d,e,f,g) scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
#define scaniippp(a,b,c,d,e,f,g,h) scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
#define scaniiippp(a,b,c,d,e,f,g,h,i) scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
#define scaniiipppp(a,b,c,d,e,f,g,h,i,j) scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
#define scaniiippppp(a,b,c,d,e,f,g,h,i,j,k) scanf("%d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k);
#define scaniiipppppp(a,b,c,d,e,f,g,h,i,j,k,l) scanf("%d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
#define scaniiippppppp(a,b,c,d,e,f,g,h,i,j,k,l,m) scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m);
#define scaniiipppppppp(a,b,c,d,e,f,g,h,i,j,k,l,m,n) scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n);
#define scaniiippppppppp(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o) scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o);
#define scaniiipppppppppp(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
#define scaniiippppppppppp(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q) scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q);
#define scaniiipppppppppppp(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r) scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q,&r);
#define scaniiippppppppppppp(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s) scanf