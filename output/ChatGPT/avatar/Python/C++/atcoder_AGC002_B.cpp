#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> balls(N, vector<int>(2, 1));
    balls[0] = {0, 1};

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        int w_x = balls[x - 1][0];
        int r_x = balls[x - 1][1];
        int w_y = balls[y - 1][0];
        int r_y = balls[y - 1][1];

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
    for (int i = 0; i < N; i++) {
        if (balls[i][1]) {
            ans += 1;
        }
    }
    cout << ans << endl;

    return 0;
}