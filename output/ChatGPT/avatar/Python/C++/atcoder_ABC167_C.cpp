#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<vector<int>> c(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c[i][j];
        }
    }

    vector<int> pre(n);
    iota(pre.begin(), pre.end(), 0);

    vector<vector<int>> l;
    vector<int> rem;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        vector<int> indices(i);
        iota(indices.begin(), indices.end(), 0);
        do {
            l.push_back(indices);
        } while (next_permutation(indices.begin(), indices.end()));
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < l.size(); j++) {
            int ca = 0;
            for (int ii : l[j]) {
                ca += c[ii][i];
            }
            if (ca < x) {
                rem.insert(rem.begin(), j);
            }
        }

        if (rem.size() > 0) {
            for (int j : rem) {
                l.erase(l.begin() + j);
            }
            rem.clear();
        }

        if (l.empty()) {
            cout << -1 << endl;
            break;
        }
    }
    else {
        for (vector<int>& i : l) {
            int ca = 0;
            for (int j : i) {
                ca += c[j][0];
            }
            if (ans == 0) {
                ans = ca;
            }
            else {
                ans = min(ans, ca);
            }
        }
        cout << ans << endl;
    }


    return 0;
}