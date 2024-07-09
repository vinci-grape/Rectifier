#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x = 0;
    if (k <= max(n * n / 2, n * n - (n * n / 2))) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == j % 2 && x < k) {
                    cout << "L";
                    x++;
                } else {
                    cout << "S";
                }
            }
            cout << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}