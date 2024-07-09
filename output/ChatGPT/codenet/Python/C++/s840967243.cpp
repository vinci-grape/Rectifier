#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, m;
    cin >> n >> m;
    n = min(n, m);
    m = max(n, m);
    long long result = max(2 - m + n, 0) * 1LL * (1LL * n % MOD) * (1LL * m % MOD) % MOD;
    cout << result << endl;

    return 0;
}