#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    bool s = false;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '.') {
            if (s) {
                cout << 1;
                s = false;
            } else {
                cout << 0;
            }
        } else {
            if (s) {
                cout << 2;
                s = false;
            } else {
                s = true;
            }
        }
    }
    return 0;
}