#include <iostream>
using namespace std;

int solve(int n) {
    int s = (1 + n) * n / 2;
    int t = 1;
    while (t <= n) {
        s -= 2 * t;
        t *= 2;
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}