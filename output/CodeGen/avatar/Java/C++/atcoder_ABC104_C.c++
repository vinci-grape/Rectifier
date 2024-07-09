#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 100000;

int p[maxn], c[maxn];

int main() {
  int T, D;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &D);
    for (int i = 0; i < D; i++) {
      scanf("%d%d", &p[i], &c[i]);
    }
    int min = 100000;
    for (int bit = 0; bit < (1 << D); bit++) {
      int score = 0;
      int solve_num = 0;
      for (int i = 0; i < D; i++) {
        if (bit & (1 << i)) {
          score += 100 * (i + 1) * p[i] + c[i];
          solve_num += p[i];
        }
      }
      if (score < 100000) {
        for (int i = D - 1; i >= 0; i--) {
          if (!(bit & (1 << i))) {
            for (int j = 0; j < p[i] - 1; j++) {
              score += 100 * (i + 1);
              solve_num++;
              if (score >= 100000) break;
            }
          }
        }
      }
      if (score < 100000) {
        min = min < solve_num? min : solve_num;
      }
    }
    printf("%d\n", min);
  }
  return 0;
}