#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i < n + 1; i++) {
        ans += (long long)i * ((long long)n / (long long)i) * (((long long)n / (long long)i) + 1) / 2;
    }
    cout << ans << endl;
}