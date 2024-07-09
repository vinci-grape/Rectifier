#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
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
#include <algorithm>
#include <stdexcept>
#include <new>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)
#define REP1(i, n) for(int i = 1; i <= (n); i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MTP make_tuple
#define MINUPDATE(A,B) A = min((A), (B));
#define MAXUPDATE(A,B) A = max((A), (B));
#define SGN(X) ((X)? ( (X)>0?1:-1 ) : 0)
#define CONTAINS(S,E) ((S).find(E)!= (S).end())
#define SZ(x) ((int) (x).size())

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return SZ(x); }

#define EPS 1e-9

const double PI = 2.0*acos(0.0);

template<class T> T mod(T a, T b) {
  return a - (b * floor(a/b));
}
template<class T> T gcd(T a, T b) {
  if(!b) return a;
  return gcd(b, a % b);
}
template<class T> T lcm(T a, T b) {
  return a * b / gcd(a, b);
}

template<class T> T power(T a, T b) {
  T r = 1;
  while(b) {
    if(b & 1) r *= a;
    a *= a;
    b >>= 1;
  }
  return r;
}
template<class T> T BigMod (T a, T b, T mod) {
  return (a % mod + mod) % mod;
}
template<class T> T BigDiv (T a, T b, T mod) {
  return BigMod(a, b, mod) / BigMod(b, mod, mod);
}
template<class T> T BigPow (T a, T b, T mod) {
  return BigMod(a, b, mod);
}

template<class T> T modInverse(T a, T m) {
  return BigDiv(a, m, m);
}

template<class T> T modMultiply(T a, T b, T m) {
  return BigPow(a, b, m);
}

template<class T> T modExponentiation(T a, T b, T m) {
  return BigPow(a, b, m);
}

template<class T> T modPower(T a, T b, T m) {
  return BigPow(a, b, m);
}

template<class T> T modMultiplyInverse(T a, T m) {
  return modInverse(a, m);
}

template<class T> T modExponentiationInverse(T a, T m) {
  return modInverse(a, m);
}

template<class T> T modPowerInverse(T a, T m) {
  return modInverse(a, m);
}

template<class T> T modAdd(T a, T b, T m) {
  return (a % m + b % m) % m;
}
template<class T> T modSubtract(T a, T b, T m) {
  return (a % m - b % m) % m;
}
template<class T> T modMultiply(T a, T b, T m) {
  return (a % m * b % m) % m;
}
template<class T> T modDivide(T a, T b, T m) {
  return (a % m / b % m) % m;
}

template<class T> T modModulus(T a, T b, T m) {
  return (a % m) % m;
}

template<class T> T modModulus(T a, T b) {
  return (a % b) % b;
}

template<class T> T modPowerModulus(T a, T b, T m) {
  return (a % m) % m;
}

template<class T> T modPowerModulus(T a, T b) {
  return (a % b) % b;
}

template<class T> T modInverse(T a, T m) {
  return modPowerModulus(a, m-2, m);
}

template<class T> T modExponentiation(T a, T b, T m) {
  return modPowerModulus(a, b, m);
}

template<class T> T modExponentiationInverse(T a, T m) {
  return modPowerModulus(a, m-2, m);
}

template<class T> T modPower(T a, T b, T m) {
  return modPowerModulus(a, b, m);
}

template<class T> T modPowerInverse(T a, T m) {
  return modPowerModulus(a, m-2, m);
}

template<class T> T modAdd(T a, T b) {
  return (a + b) % MOD;
}
template<class T> T modSubtract(T a, T b) {
  return (a - b + MOD) % MOD;
}
template<class T> T modMultiply(T a, T b) {
  return (a * b) % MOD;
}
template<class T> T modDivide(T a, T b) {
  return (a * modInverse(b, MOD)) % MOD;
}

template<class T> T modModulus(T a, T b) {
  return (a % b) % MOD;
}

template<class T> T modModulus(T a) {
  return (a % MOD) % MOD;
}

template<class T> T modPower(T a, T b) {
  return (a * modPower(a, b-1, MOD)) % MOD;
}

template<class T> T modPower(T a, T b, T m) {
  return (a * modPower(a, b-1, m)) % m;
}

template<class T> T modExponentiation(T a, T b) {
  return (a * modExponentiation(a, b-1, MOD)) % MOD;
}

template<class T> T modExponentiation