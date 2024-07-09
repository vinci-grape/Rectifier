#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <sstream>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define REP(i,x,y) for(int i = (int)x; i <= (int)y; i++)
#define FOR(i,x,y) for(int i = (int)x; i < (int)y; i++)
#define REV(i,x,y) for(int i = (int)x; i >= (int)y; i--)
#define tr(container,it) \
  for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)
#define present(container,x) \
  (binary_search(begin(container),end(container), x))
#define cpresent(container,x) \
  (binary_search(begin(container),end(container), x) && 	\
  !binary_search(begin(container),end(container), -x))

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &container) { return (int)container.size(); }

#define MOD 1000000007

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=a[i];
    }
    printf("%d\n",ans);
    return 0;
}