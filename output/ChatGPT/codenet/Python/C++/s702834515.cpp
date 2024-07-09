#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r = 0;
    for (int ii = 0; ii < n; ii++) {
        if ((ii + 1) % 3 != 0 && (ii + 1) % 5 != 0) {
            r += (ii + 1);
        }
    }
    cout << r << endl;
    return 0;
}