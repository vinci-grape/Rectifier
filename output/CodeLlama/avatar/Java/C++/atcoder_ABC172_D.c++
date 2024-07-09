#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long ans = 0;
    for (int i = 1; i < n + 1; i++) {
        ans += (long)i * ((long)n / (long)i) * ((long)n / (long)i + 1) / 2;
    }
    cout << ans << endl;
}