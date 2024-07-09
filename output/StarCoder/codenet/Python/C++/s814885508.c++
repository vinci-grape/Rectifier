#include <iostream>
using namespace std;

int main() {
    int X, K, D;
    cin >> X >> K >> D;

    int r = X / D;
    if (abs(r) > K) {
        cout << abs(X) - K * D << endl;
        return 0;
    }
    int a = X - r * D;
    if ((K - r) % 2 == 0) {
        cout << a << endl;
    } else {
        cout << abs(D - a) << endl;
    }
}