#include <iostream>
using namespace std;

int G(int a, int b) {
    while (a % b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return b;
}

int L(int a, int b) {
    return a * b / G(a, b);
}

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int lcm = L(x, y);
    cout << b / lcm - (a - 1) / lcm << endl;

    return 0;
}