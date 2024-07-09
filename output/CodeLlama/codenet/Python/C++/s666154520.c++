#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            cout << i * i << endl;
            return 0;
        }
    }
    cout << (i - 1) * (i - 1) << endl;
    return 0;
}