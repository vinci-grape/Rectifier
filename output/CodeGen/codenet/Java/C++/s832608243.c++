#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    for (int i = 1; i <= 100000; i++) {
        if (floor(1.* i *.08) == a && b == floor(.1 * i)) {
            cout << i << endl;
            break;
        }
    }
    if (i > 100000) {
        cout << "-1" << endl;
    }
    return 0;
}