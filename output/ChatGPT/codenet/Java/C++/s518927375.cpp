#include <iostream>

using namespace std;

int main() {
    long long k, a, b;
    cin >> k >> a >> b;

    if (b <= a + 2) {
        cout << 1 + k << endl;
        return 0;
    }

    long long x = k - (a - 1);
    long long ans = a + (x / 2) * (b - a) + (x % 2);

    cout << ans << endl;

    return 0;
}