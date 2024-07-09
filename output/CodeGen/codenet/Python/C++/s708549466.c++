#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int tmp = a[i] + a[i + 1];
        if (tmp > x) {
            if (tmp - x > a[i + 1]) {
                a[i] = tmp - a[i + 1] - x;
                a[i + 1] = 0;
            } else {
                a[i + 1] = a[i + 1] - (tmp - x);
            }
            cnt += tmp - x;
        }
    }
    cout << cnt << endl;
    return 0;
}