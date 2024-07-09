#include <iostream>
using namespace std;
int G(int a, int b) {
    while (a % b != 0) {
        a = b;
        b = a % b;
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
    cout << b / lcm - (a - 1) / lcm;
    return 0;
}