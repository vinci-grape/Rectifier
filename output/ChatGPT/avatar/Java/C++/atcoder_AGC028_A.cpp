#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int gcd = __gcd(n, m);

    string s, t;
    cin >> s >> t;

    for (int k = 0; k < gcd; k++) {
        if (s[k * n / gcd] != t[k * m / gcd]) {
            cout << -1 << endl;
            return 0;
        }
    }

    long long lcm = 1LL * n * m / gcd;
    cout << lcm << endl;

}