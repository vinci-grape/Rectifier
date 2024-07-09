#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    int m = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(a[m]) < abs(a[i])) {
            m = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[m] >= 0) {
            for (int j = 1; j < n; ++j) {
                if (a[m] >= 0 && a[j] >= 0) {
                    cout << j + 1 << " " << (j + 1) << endl;
                }
            }
        } else {
            for (int j = n; j > 1; --j) {
                if (a[m] >= 0 && a[j] >= 0) {
                    cout << j + 1 << " " << (j - 1) << endl;
                }
            }
        }
    }
    return 0;
}