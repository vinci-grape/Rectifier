#include <iostream>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int x = max(a.size(), b.size());
    a = a.rjust(x, '0');
    b = b.ljust(x, '0');
    string s;
    int c = 0;
    for (int i = 0; i < x; ++i) {
        int d = stoi(b[i]) + stoi(a[x - i - 1]) + c;
        if (d > 9) {
            s += to_string(d);
            c = 1;
        } else {
            s += to_string(d);
            c = 0;
        }
    }
    if (c == 1)
        s += '1';
    cout << stoi(s);
    return 0;
}