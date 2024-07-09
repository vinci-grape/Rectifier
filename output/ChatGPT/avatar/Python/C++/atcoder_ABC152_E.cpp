#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    const int MOD = 1000000007;
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    long long _lcm = 1;
    for (int i = 0; i < N; i++) {
        _lcm = lcm(_lcm, A[i]);
    }
    
    long long ans = _lcm;
    for (int i = 0; i < N; i++) {
        long long s = A[i];
        long long inv_s = 1;
        long long power = MOD - 2;
        while (power > 0) {
            if (power & 1) {
                inv_s = (inv_s * s) % MOD;
            }
            s = (s * s) % MOD;
            power >>= 1;
        }
        ans = (ans * inv_s) % MOD;
    }
    cout << ans << endl;
    
    return 0;
}