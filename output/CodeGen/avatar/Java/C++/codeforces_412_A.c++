#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    string a;
    cin >> n >> k >> a;
    if (k > n / 2) {
        while (k < n) {
            cout << "RIGHT" << endl;
            k++;
        }
    } else {
        while (k > 1) {
            cout << "LEFT" << endl;
            k--;
        }
    }
    if (k == 1) {
        for (int i = 0; i < a.length(); i++) {
            cout << "PRINT " << a[i] << endl;
            if (i + 1 < a.length()) {
                cout << "RIGHT" << endl;
            }
        }
    } else {
        for (int i = a.length() - 1; i >= 0; i--) {
            cout << "PRINT " << a[i] << endl;
            if (i - 1 >= 0) {
                cout << "LEFT" << endl;
            }
        }
    }
    return 0;
}