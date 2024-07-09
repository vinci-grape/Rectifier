#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += a[i];
        if (a[i + 1] <= 2 * sum) {
            count++;
        } else {
            count = 0;
        }
    }
    cout << count + 1 << endl;
    return 0;
}