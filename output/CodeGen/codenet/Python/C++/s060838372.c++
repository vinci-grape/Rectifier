#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int maxn = 1005;
const int maxk = 1005;
char S[maxn];
int N, K;

void solve() {
  int i;
  for (i = 0; i < K-1; ++i) {
    if (S[i] == 'A') {
      S[i] = 'a';
    } else if (S[i] == 'B') {
      S[i] = 'b';
    } else {
      S[i] = 'c';
    }
  }
  reverse(S, S + K - 1);
  for (i = K - 2; i >= 0; --i) {
    if (S[i] == 'A') {
      S[i] = 'a';
    } else if (S[i] == 'B') {
      S[i] = 'b';
    } else {
      S[i] = 'c';
    }
  }
  reverse(S, S + K - 1);
  printf("%s\n", S);
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    scanf("%d%d", &N, &K);
    scanf("%s", S);
    solve();
  }
  return 0;
}