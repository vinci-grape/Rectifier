#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int x;
    cin >> x;
    cout << 360 / gcd(360, x) << endl;

    return 0;
}