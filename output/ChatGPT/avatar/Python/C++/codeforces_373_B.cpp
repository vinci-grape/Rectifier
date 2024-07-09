#include <iostream>
using namespace std;

long long sum(long long k) {
    long long ret = 0;
    long long pw = 10;
    long long len = 1;
    while (true) {
        long long cur = min(pw - 1, k);
        long long prev = pw / 10;
        ret += (cur - prev + 1) * len;
        if (pw - 1 >= k) {
            break;
        }
        len += 1;
        pw *= 10;
    }
    return ret;
}

int main() {
    long long w, m, k;
    cin >> w >> m >> k;
    long long lo = 0;
    long long hi = 1e18;
    while (hi - lo > 1) {
        long long md = (lo + hi) / 2;
        long long c = sum(m + md - 1) - sum(m - 1);
        if (c * k <= w) {
            lo = md;
        }
        else {
            hi = md;
        }
    }
    cout << lo << endl;
    return 0;
}