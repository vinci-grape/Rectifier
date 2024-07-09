#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n, m;
    cin >> n >> m;
    vector < vector < int > > balls(n, vector < int > (2, 0));
    balls[0] = {0, 1};
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        int w_x = balls[x - 1][0], r_x = balls[x - 1][1];
        int w_y = balls[y - 1][0], r_y = balls[y - 1][1];
        if (w_x >= 1 && r_x >= 1) {
            balls[x - 1][0] -= 1;
            balls[y - 1][1] += 1;
        } else if (w_x == 0) {
            balls[x - 1][1] -= 1;
            balls[y - 1][1] += 1;
        } else {
            balls[x - 1][0] -= 1;
            balls[y - 1][0] += 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (balls[i][1]) ans++;
    }
    cout << ans << endl;
    return 0;
}