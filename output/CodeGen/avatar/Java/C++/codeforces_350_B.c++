#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if you want to see debug info

typedef long long ll;

const int maxn = 1000005;

int n;
int a[maxn];
int b[maxn];
int num[maxn];
int ans;
bool st[maxn];

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i <= n; i++) {
    scanf("%d", &b[i]);
  }
  for (int i = 1; i <= n; i++) {
    num[b[i]]++;
  }
  for (int i = 1; i <= n; i++) {
    if (a[i] == 1) {
      st[i] = true;
      int x = b[i];
      int s = 1;
      while (num[x] == 1 && x!= 0 && a[x]!= 1) {
        st[x] = true;
        x = b[x];
        s++;
      }
      if (s > ans) {
        ans = s;
      }
    }
  }
  printf("%d\n", ans);
}