#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <deque>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <bitset>
#include <ctime>
#include <cstdlib>
#include <stdexcept>
#include <stdint.h>

using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug.

typedef long long int64;

int64 gcd(int64 a, int64 b) {
  if (a < b) {
    return gcd(b, a);
  }
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int64 lcm(int64 a, int64 b) {
  return a / gcd(a, b) * b;
}

int64 max(int64 a, int64 b) {
  return (a > b)? a : b;
}

int64 min(int64 a, int64 b) {
  return (a < b)? a : b;
}

int64 pow(int64 a, int64 b) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret *= a;
    }
    a *= a;
  }
  return ret;
}

int64 pow(int64 a, int64 b, int64 mod) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  return ret;
}

int64 pow(int64 a, int64 b, int64 mod, int64 n) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  while (n) {
    if (n & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    n >>= 1;
  }
  return ret;
}

int64 mod_pow(int64 a, int64 b, int64 mod) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  return ret;
}

int64 mod_pow(int64 a, int64 b, int64 mod, int64 n) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  while (n) {
    if (n & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    n >>= 1;
  }
  return ret;
}

int64 gcd(int64 a, int64 b, int64 mod) {
  if (a < b) {
    return gcd(b, a, mod);
  }
  if (b == 0) {
    return a;
  }
  return gcd(b, mod - a % b, mod);
}

int64 lcm(int64 a, int64 b, int64 mod) {
  return a / gcd(a, b, mod) * b;
}

int64 max(int64 a, int64 b, int64 mod) {
  return (a > b)? a : b;
}

int64 min(int64 a, int64 b, int64 mod) {
  return (a < b)? a : b;
}

int64 pow(int64 a, int64 b, int64 mod) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  return ret;
}

int64 pow(int64 a, int64 b, int64 mod, int64 n) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  while (n) {
    if (n & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    n >>= 1;
  }
  return ret;
}

int64 mod_pow(int64 a, int64 b, int64 mod) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  return ret;
}

int64 mod_pow(int64 a, int64 b, int64 mod, int64 n) {
  int64 ret = 1;
  for (; b; b >>= 1) {
    if (b & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
  }
  while (n) {
    if (n & 1) {
      ret = ret * a % mod;
    }
    a = a * a % mod;
    n >>= 1;