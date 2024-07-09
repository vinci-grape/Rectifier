#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long ans = pow(10, 18);

    for (int i = 1; i < sqrt(n) + 2; i++) {
        if (n % i != 0) {
            continue;
        }
        int j = n / i;
        ans = min(ans, (long long)i + j - 2);
    }

    cout << ans << endl;

    return 0;
}