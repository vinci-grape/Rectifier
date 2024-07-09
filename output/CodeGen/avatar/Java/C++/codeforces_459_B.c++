#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to see debug messages.

typedef long long ll;

const int N = 100000;

int A[N];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", A + i);
  }
  sort(A, A + n);
  int min = A[0];
  int max = A[n - 1];
  long long mins = 0;
  long long maxs = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] == min) {
      mins++;
    }
    if (A[i] == max) {
      maxs++;
    }
  }
  if (min == max) {
    printf("%lld %lld\n", max - min, mins * (mins - 1) / 2);
  } else {
    printf("%lld %lld\n", max - min, mins * maxs);
  }
}