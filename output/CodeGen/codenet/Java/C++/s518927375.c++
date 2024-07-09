#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    long k, a, b;
    cin >> k >> a >> b;
    if (b <= a + 2) {
        cout << 1 + k;
        return 0;
    }
    long x = k - (a - 1);
    long ans = a + (x / 2) * (b - a) + (x % 2);
    cout << ans;
    return 0;
}