#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 13) {
        cout << b;
    } else if (a >= 6) {
        cout << b / 2;
    } else {
        cout << 0;
    }
    return 0;
}