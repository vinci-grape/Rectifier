#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1000000000;

    for (int i = 1; i * i <= n; i++) {
        if (n % i!= 0) continue;
        int j = n / i;
        ans = min(ans, i + j - 2);
    }

    cout << ans << endl;

    return 0;
}