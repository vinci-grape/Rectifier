#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];

    if (n % m == 0) {
        for (int i = 0; i < m; i++) {
            a[i] = n / m;
        }
    } else {
        int sub = n / m;
        for (int i = 0; i < m; i++) {
            a[i] = sub;
        }
        int test = n - (sub * m);
        int count = 0;
        for (int i = 0; i < test; i++) {
            a[count] = a[count] + 1;
            count++;
            if (count >= m) count = 0;
        }
    }

    for (int i = m - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }

}