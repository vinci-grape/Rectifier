#include <iostream>
using namespace std;
int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = 0; i < 2; i++) {
        if (a >= b) {
            sum += a;
            a--;
        } else {
            sum += b;
            b--;
        }
    }
    cout << sum << endl;
}