#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    long ans = 0;
    for (int i = 1; i < n + 1; i++) {
        ans += i * (n / i) * (n / i + 1) / 2;
    }
    cout << ans << endl;
    return 0;
}