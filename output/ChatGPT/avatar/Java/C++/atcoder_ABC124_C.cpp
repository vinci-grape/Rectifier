#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;
    string a = x;
    string b = x;
    int a1 = 0;
    int a2 = 0;
    for (int i = 1; i < x.length(); i++) {
        if (a[i] == a[i - 1]) {
            if (a[i] == '1') a[i] = '0';
            else a[i] = '1';
            a1++;
        }
    }
    for (int i = x.length() - 1; i > 0; i--) {
        if (b[i] == b[i - 1]) {
            if (b[i - 1] == '1') b[i - 1] = '0';
            else b[i - 1] = '1';
            a2++;
        }
    }
    cout << min(a1, a2) << endl;
    return 0;
}