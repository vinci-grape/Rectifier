#include <bits/stdc++.h>
using namespace std;

const long long DEVISOR = 1000000000+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    for (long long i = k; i <= n+1; i++) {
        long long max = i*(2*n-i+1)/2 ;
        long long min = i*(i-1)/2;
        ans += (max - min + 1) % DEVISOR;
    }
    cout << ans% DEVISOR << endl;
}