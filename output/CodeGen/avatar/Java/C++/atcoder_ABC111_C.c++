#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> vo(n);
    vector<int> ve(n);
    vector<int> vt(n);
    for (int i = 0; i < n; i++) {
        vt[v[i]]++;
        if (i % 2 == 0) {
            ve[v[i]]++;
        } else {
            vo[v[i]]++;
        }
    }
    sort(vo.begin(), vo.end(), greater<int>());
    sort(ve.begin(), ve.end(), greater<int>());
    sort(vt.begin(), vt.end(), greater<int>());
    int ans = 0;
    if (vo[0] + ve[0] == vt[0]) {
        ans = min(n - vo[0] - ve[1], n - vo[1] - ve[0]);
    } else {
        ans = n - vo[0] - ve[0];
    }
    cout << ans << endl;
    return 0;
}