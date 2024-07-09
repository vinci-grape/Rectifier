#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    if (n == 1 && a[0] > 1) {
        ans = 1;
    } else {
        for (int j = 0; j < n; j++) {
            if (j == 0 || a[j]!= a[j - 1]) {
                int tmp = 1;
                for (int i = j + 1; i < n; i++) {
                    if (a[j] == a[i]) {
                        tmp++;
                    } else {
                        break;
                    }
                }
                if (tmp > a[j]) {
                    ans += tmp - a[j];
                } else if (tmp < a[j]) {
                    ans += tmp;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}