#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    cout << max(2 - m + n, 0) * fact(n) * fact(m) % 1000000007;
}