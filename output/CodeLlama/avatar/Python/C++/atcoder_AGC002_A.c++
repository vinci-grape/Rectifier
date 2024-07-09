#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0) {
        cout << "Positive";
    } else if (a <= 0 && b >= 0) {
        cout << "Zero";
    } else {
        if ((a + b) % 2 == 0) {
            cout << "Negative";
        } else {
            cout << "Positive";
        }
    }
    return 0;
}