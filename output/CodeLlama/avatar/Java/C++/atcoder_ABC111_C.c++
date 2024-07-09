#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int v[100010];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int vo[100010], ve[100010], vt[100010];
    fill(vo, vo + 100010, 0);
    fill(ve, ve + 100010, 0);
    fill(vt, vt + 100010, 0);
    for (int i = 0; i < n; i++) {
        vt[v[i]]++;
        if (i % 2 == 0) {
            ve[v[i]]++;
        } else {
            vo[v[i]]++;
        }
    }
    sort(vo, vo + 100010, greater<int>());
    sort(ve, ve + 100010, greater<int>());
    sort(vt, vt + 100010, greater<int>());
    int ans = 0;
    if (vo[0] + ve[0] == vt[0]) {
        ans = min(n - vo[0] - ve[1], n - vo[1] - ve[0]);
    } else {
        ans = n - vo[0] - ve[0];
    }
    cout << ans << endl;
    return 0;
}