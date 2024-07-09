#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string c;
    cin >> c;

    int num_w = 0, num_r = 0;
    for (int i = 0; i < N; i++) {
        if (c[i] == 'W')
            num_w++;
        else
            num_r++;
    }

    string comp = string(num_r, 'R') + string(num_w, 'W');
    int ans = 0;
    for (int i = 0; i < num_r; i++) {
        if (c[i] != comp[i])
            ans++;
    }

    ans = min(num_w, num_r, ans);
    cout << ans << endl;

    return 0;
}