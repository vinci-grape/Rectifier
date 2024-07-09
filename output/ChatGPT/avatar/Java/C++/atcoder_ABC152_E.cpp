#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long modDiv(long long a, long long b, long long mod) {
    return (a % mod) * modInv(b, mod) % mod;
}

long long modInv(long long x, long long mod) {
    long long result = 1;
    long long base = x % mod;
    long long exponent = mod - 2;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long lcmVal = 1;
    for (int ai : A) {
        lcmVal = lcm(lcmVal, ai);
    }

    long long mod = 1000000007;
    long long modLcm = lcmVal % mod;

    long long ans = 0;
    for (int ai : A) {
        ans = (ans + modDiv(modLcm, ai, mod)) % mod;
    }

    cout << ans << endl;

}