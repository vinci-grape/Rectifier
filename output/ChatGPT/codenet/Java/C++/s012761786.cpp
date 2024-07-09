#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long sa = abs(a - b);

    long long ans = 0;

    if (sa % 2 == 0) {
        ans = sa / 2;
    }
    else {
        long long AAA = min((n - a), (a - 1));
        long long BBB = min((n - b), (b - 1));

        ans = min(AAA, BBB);

        sa -= 1;
        ans += 1;

        ans += sa / 2;
    }

    cout << ans << endl;

    //cout << 1/2 << endl;

    return 0;
}