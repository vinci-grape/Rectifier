#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n > k) {
        int tmp = n % k;
        if (tmp >= k - tmp) {
            ans = k - tmp;
        } else {
            ans = tmp;
        }
    } else if (n < k) {
        if (n >= k - n) {
            ans = k - n;
        } else {
            ans = n;
        }
    } else {
        ans = 0;
    }

    cout << ans << endl;

    return 0;
}