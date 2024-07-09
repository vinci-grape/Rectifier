#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <queue>
#include <stack>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <cassert>
using namespace std;

typedef long long ll;
typedef double lf;
typedef pair<ll,ll> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }

#define pb push_back
#define eb emplace_back
#define mp make_pair

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(),x.end()

const int inf=1e9;
const int maxn=1e5;
const int lmaxn = 1e6;

int n,m;

int main(){
    scanf("%d %d",&n,&m);
    int a,b;
    int ans=0;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(a>b) swap(a,b);
        ans+=b-a+1;
    }
    printf("%d\n",ans);
    return 0;
}