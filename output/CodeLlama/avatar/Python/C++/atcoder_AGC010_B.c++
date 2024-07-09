#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % (n * (n + 1) / 2)) {
        cout << "NO";
    } else {
        int k = sum / (n * (n + 1) / 2);
        a.push_back(a[0]);
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if ((k - a[i] + a[i - 1]) % n || (k - a[i] + a[i - 1]) / n >= 0) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    }
    return 0;
}