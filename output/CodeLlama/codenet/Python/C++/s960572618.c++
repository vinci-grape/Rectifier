#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}