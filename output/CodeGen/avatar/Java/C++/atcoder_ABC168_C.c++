#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <deque>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <functional>
#include <bitset>
#include <utility>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <deque>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <functional>
#include <bitset>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(int i=0,i##e=m.size();i<i##e;++i)
#define forj(j,m) for(int j=0,j##e=m.size();j<j##e;++j)
#define fork(k,m) for(int k=0,k##e=m.size();k<k##e;++k)
#define forl(l,m) for(int l=0,l##e=m.size();l<l##e;++l)
#define fora(i,m) for(auto i=m.begin(),i##e=m.end();i!=i##e;++i)
#define fors(i,m) for(auto i=m.begin(),i##e=m.end();i!=i##e;++i)
#define forc(i,m) for(const auto i=m.begin(),i##e=m.end();i!=i##e;++i)
#define forn(i,n) for(int i=0;i<n;i++)
#define forin(i,m) for(auto i=m.begin(),i##e=m.end();i!=i##e;i++)
#define forjn(j,n,m) for(int j=0;j<n;j++) for(int k=0;k<m;k++)
#define forkn(k,n,m) for(int k=0;k<n;k++) for(int l=0;l<m;l++)
#define formn(m,n) for(int m=0,m##e=n;m<m##e;m++)
#define forr(i,n) for(int i=n-1;i>=0;i--)
#define forrr(i,n,r) for(int i=n-1;i>=r;i--)
#define forrrr(i,n,r,r2) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=0;j--)
#define forrrrr(i,n,r,r2,r3) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--)
#define forrrrrr(i,n,r,r2,r3,r4) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--) for(int k=r4-1;k>=0;k--)
#define forrrrrrr(i,n,r,r2,r3,r4,r5) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--) for(int k=r4-1;k>=r5;k--)
#define forrrrrrrr(i,n,r,r2,r3,r4,r5,r6) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--) for(int k=r4-1;k>=r5;k--) for(int l=r6-1;l>=0;l--)
#define forrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--) for(int k=r4-1;k>=r5;k--) for(int l=r6-1;l>=r7;l--)
#define forrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--) for(int k=r4-1;k>=r5;k--) for(int l=r6-1;l>=r7;l--) for(int m=r8-1;m>=0;m--)
#define forrrrrrrrrrr(i,n,r,r2,r3,r4,r5,r6,r7,r8,r9) for(int i=n-1;i>=r;i--) for(int j=r2-1;j>=r3;j--) for(int k=r4-1;k>=r5;k--) for(int l=r6-1;l