#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> req(n), pre(m);
    for (int i = 0; i < n; i++) {
        cin >> req[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> pre[i];
    }
    int i = n - 1, j = m - 1;
    int ans = 0;
    while (i >= 0 && j >= 0) {
        if (req[i] > pre[j]) {
            ans++;
        } else {
            j--;
        }
        i--;
    }
    cout << ans << i + 1 << endl;
    return 0;
}