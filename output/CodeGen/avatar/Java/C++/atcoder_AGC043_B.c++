#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

#define N 100000

int cal(char s[], char c) {
  int n = strlen(s);
  int m = n - 1;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == c && (m & i) == i) {
      ans ^= 1;
    }
  }
  return ans;
}

int main() {
  char s[N];
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  if (n == 2) {
    printf("%d", cal(s, '1'));
  } else {
    printf("%d", cal(s, '2') * 2);
  }
  return 0;
}