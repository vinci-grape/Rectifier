#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long lcm = 1;
    for (int ai : A) {
        long long a = ai;
        lcm = lcm / __gcd(lcm, a) * a;
    }
    long long mod = 1000000007;
    long long modLcm = lcm % mod;
    long long ans = 0;
    for (int ai : A) {
        ans = (ans + modDiv(modLcm, ai, mod)) % mod;
    }
    cout << ans << endl;
}

long long modDiv(long long a, long long b, long long mod) {
    return (a % mod) * modInv(b, mod) % mod;
}

long long modInv(long long x, long long mod) {
    return modPow(x, mod - 2, mod);
}

long long modPow(long long b, long long e, long long mod) {
    long long ans = 1;
    long long x = b % mod;
    for (long long y = e; y != 0; y >>= 1) {
        if (y & 1) {
            ans = (ans * x) % mod;
        }
        x = (x * x) % mod;
    }
    return ans;
}