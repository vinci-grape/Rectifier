#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        if (a >= b) {
            sum += a;
            a -= 1;
        } else {
            sum += b;
            b -= 1;
        }
    }
    cout << sum << endl;
    return 0;
}