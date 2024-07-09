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
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cassert>
#include <string.h>

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
#define INF 1000000000
#define EPS 1e-9
#define MOD 1000000007
#define PI acos(-1.0)
#define MAX 100000000

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef pair<double,double> dd;
typedef vector<dd> vdd;
typedef pair<string,string> ss;
typedef vector<ss> vss;
typedef pair<char,char> cc;
typedef vector<cc> vcc;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef pair<double,ii> dii;
typedef vector<dii> vdii;
typedef pair<int,int> i;
typedef vector<i> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> llll;
typedef vector<llll> vllll;

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    fori(i,n){
      forj(j,m){
        scanf("%d",&a[i][j]);
      }
    }
    int ans=0;
    fori(i,n){
      forj(j,m){
        if(a[i][j]==1){
          ans++;
        }
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}