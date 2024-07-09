#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, d;
    long long x;
    cin >> r >> d >> x;

    for (int i = 0; i < 10; ++i) {
        x = r * x - d;
        cout << x << endl;
    }

    return 0;
}