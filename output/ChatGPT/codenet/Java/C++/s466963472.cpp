#include <iostream>
using namespace std;

int solve(int d) {
    int ans = 0;
    for (int i = 1; i * d < 600; i++) {
        int x = i * d;
        int y = x * x;
        ans += y * d;
    }
    return ans;
}

int main() {
    int d;
    while (cin >> d) {
        cout << solve(d) << endl;
    }
    return 0;
}