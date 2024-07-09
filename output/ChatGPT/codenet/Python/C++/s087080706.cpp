#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = upper_bound(a.begin(), a.end(), x) - a.begin();
    cout << min(i, m - i) << endl;
    return 0;
}