#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int t;
    cin >> t;
    while ( t-- ) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> count(n, vector<int>(n, 0));
        int ans = -1;
        for (int k = 0; k < m; k++) {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            bool found = false;
            for (int i = x - 2; i <= x + 1; i++) {
                for (int j = y - 2; j <= y + 1; j++) {
                    if (i >= 0 && i < n && j >= 0 && j < n) {
                        count[i][j]++;
                        if (count[i][j] == 9) {
                            found = true;
                        }
                    }
                }
            }
            if (found) {
                ans = k + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}