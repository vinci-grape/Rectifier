#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, digit;
    while (cin >> a >> b) {
        digit = log10(a + b) + 1;
        cout << digit << endl;
    }
    return 0;
}