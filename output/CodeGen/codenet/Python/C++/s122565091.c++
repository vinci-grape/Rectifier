#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    int v, w;
    int t;
    cin >> a >> v >> b >> w >> t;
    if (a == b) {
        cout << "YES";
    } else if (v <= w) {
        cout << "NO";
    } else {
        if (t < abs(a - b) / (v - w)) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    }
    return 0;
}