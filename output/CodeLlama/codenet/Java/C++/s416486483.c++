#include <iostream>
#include <cmath>
using namespace std;

long long split(long long n, long long k) {
  long long sum = 0;
  while (n > 0) {
    sum += n % k;
    n /= k;
  }
  return sum;
}

long long solve(long long n, long long s) {
  long long k;
  for (k = 2; k*k <= n || k < 100; k++) {
    if (split(n, k) == s) {
      return k;
    }
  }
  while (k <= n) {
    long long a = n / k;
    long long b = n % k;
    if ((a + b - s) % a == 0) {
      long long dk = (a + b - s) / a;
      if (dk >= 0 && b - dk*a >= 0) {
        return k + dk;
      }
    }
    k = n / a + 1;
  }
  if (n == s) {
    return n+1;
  }
  return -1;
}

int main() {
  long long nl, sl;
  cin >> nl >> sl;
  cout << solve(nl, sl) << endl;
}