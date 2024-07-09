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
#include <iomanip>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const int maxn = 100000 + 5;

int n,m;
int a[maxn];

int main() {
  scanf("%d%d",&n,&m);
  for(int i = 0;i < n;i++) scanf("%d",&a[i]);
  sort(a,a+n);
  int ans = 0;
  for(int i = 0;i < n;i++) {
    int j = lower_bound(a,a+n,a[i]+m) - a;
    if(j > i) {
      ans += j - i;
    }
  }
  printf("%d\n",ans);
}