#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <functional>
#include <math.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7; //1000000007                                                   

//a^n                                                                                  
ll pow(ll a, ll n) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res *= a;
    a *= a;
    n >>= 1;
  }
  return res;
}

//a^n % mod                                                                            
ll mod_pow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

//a^(-1) % mod (only if : a % p != 0)                                                  
ll mod_inv(ll a, ll mod) {
  return mod_pow(a, mod - 2, mod);
}

//nCk % mod                                                                            
ll mod_nCk(int n, int k, int mod) {
  if (n == 0 || k == 0) return 1;
  ll p = 1, q = 1;
  for (int i = n - k + 1; i <= n; i++)
    p = (p * i) % MOD;
  for (int i = 2; i <= k; i++)
    q = (q * i) % MOD;
  q = mod_inv(q, MOD);
  return (p * q) % MOD;
}

int main() {
  int n, k; cin >> n >> k;
  cout << mod_nCk(k, n, MOD) << endl;
}