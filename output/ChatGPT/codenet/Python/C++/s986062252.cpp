#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (a < b) return gcd(b, a);
    if (b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int aa = gcd(n, m);
    int bb = lcm(n, m);
    int cc = aa / bb;
    for (int i = 0; i < aa; i++) {
        if (s[n/aa*i] != t[m/aa*i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << bb << endl;

    return 0;
}