#include <iostream>
using namespace std;

int main() {
    int E, Y;
    cin >> E >> Y;

    if (E == 0) {
        if (Y <= 1911) {
            cout << "M" << Y - 1867 << endl;
        } else if (Y <= 1925) {
            cout << "T" << Y - 1911 << endl;
        } else if (Y <= 1988) {
            cout << "S" << Y - 1925 << endl;
        } else {
            cout << "H" << Y - 1988 << endl;
        }
    } else if (E == 1) {
        cout << 1867 + Y << endl;
    } else if (E == 2) {
        cout << 1911 + Y << endl;
    } else if (E == 3) {
        cout << 1925 + Y << endl;
    } else {
        cout << 1988 + Y << endl;
    }

    return 0;
}