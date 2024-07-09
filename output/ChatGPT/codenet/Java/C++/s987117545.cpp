#include <iostream>

using namespace std;

int main() {
    long long n, k;
    const long long DEVISOR = 1000000000+7;

    cin >> n >> k;

    long long ans = 0;
    for (long long i = k; i <= n+1; i++) {
        long long max = i*(2*n-i+1)/2 ;
        long long min = i*(i-1)/2;
        ans += (max - min + 1) % DEVISOR;
    }
    cout << ans % DEVISOR << endl;

    return 0;
}