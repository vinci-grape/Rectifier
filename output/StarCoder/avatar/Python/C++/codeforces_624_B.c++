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
    sort(a, a + n, greater<int>());
    int pre = INT_MAX;
    int ans = 0;
    for (int j = 0; j < n; j++) {
        ans += max(0, min(pre - 1, a[j]));
        pre = max(0, min(pre - 1, a[j]));
    }
    cout << ans << endl;
    return 0;
}