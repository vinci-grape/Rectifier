#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p[i]--;
    }
    sort(p.begin(), p.end());
    vector<int> ng(n);
    for (int i = 0; i < n - 1; ++i) {
        if (p[i] > p[i + 1]) {
            ng[i] = i;
        }
    }
    if (ng.empty()) {
        cout << 0;
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ans = min(ans, ng[i] + 1 + n - ng[i + 1]);
    }
    cout << ans;
    return 0;
}