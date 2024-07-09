#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> vo(100010, 0);
    vector<int> ve(100010, 0);
    vector<int> vt(100010, 0);

    for (int i = 0; i < n; i++) {
        vt[v[i]]++;
        if (i % 2 == 0) {
            ve[v[i]]++;
        } else {
            vo[v[i]]++;
        }
    }

    sort(vo.rbegin(), vo.rend());
    sort(ve.rbegin(), ve.rend());
    sort(vt.rbegin(), vt.rend());

    int ans = 0;

    if (vo[0] + ve[0] == vt[0]) {
        ans = min(n - vo[0] - ve[1], n - vo[1] - ve[0]);
    } else {
        ans = n - vo[0] - ve[0];
    }

    cout << ans << endl;

    return 0;
}