#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int x = max(a.length(), b.length());
    a = string(x - a.length(), '0') + a;
    b = b + string(x - b.length(), '0');
    string s = "";
    int c = 0;
    for (int i = 0; i < x; i++) {
        int d = (b[i] - '0') + (a[x - i - 1] - '0') + c;
        if (d > 9) {
            s += to_string(d)[1];
            c = 1;
        } else {
            s += to_string(d);
            c = 0;
        }
    }
    if (c == 1) {
        s += '1';
    }
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}