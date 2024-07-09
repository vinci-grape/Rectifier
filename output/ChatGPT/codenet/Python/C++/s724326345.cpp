#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int ans = 1e10;

    for (int k = max(X, Y); k >= 0; k--) {
        int total = 2 * C * k + A * max(0, X - k) + B * max(0, Y - k);
        if (total < ans) {
            ans = total;
        }
    }

    cout << ans << endl;

}