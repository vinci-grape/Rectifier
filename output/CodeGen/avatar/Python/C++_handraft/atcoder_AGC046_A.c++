#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int count = 0;
    int tmp = x;
    x = 0;
    while (x != 360) {
        x = x + tmp;
        if (x > 360) {
            x = x - 360;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}