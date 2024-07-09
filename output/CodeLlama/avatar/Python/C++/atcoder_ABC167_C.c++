#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> c(n, vector<int>(m + 1, 0));
    vector<int> pre(n);
    iota(pre.begin(), pre.end(), 0);
    vector<vector<int>> l;
    vector<int> rem;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (1 << i); j++) {
            vector<int> temp;
            for (int k = 0; k < i; k++) {
                if (j & (1 << k)) {
                    temp.push_back(pre[k]);
                }
            }
            l.push_back(temp);
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < l.size(); j++) {
            int ca = 0;
            for (int k = 0; k < l[j].size(); k++) {
                ca += c[l[j][k]][i];
            }
            if (ca < x) {
                rem.push_back(j);
            }
        }
        if (rem.size() > 0) {
            for (int j = 0; j < rem.size(); j++) {
                l.erase(l.begin() + rem[j]);
            }
            rem.clear();
        }
        if (l.size() == 0) {
            cout << -1 << endl;
            break;
        }
    }
    if (l.size() > 0) {
        for (int i = 0; i < l.size(); i++) {
            int ca = 0;
            for (int j = 0; j < l[i].size(); j++) {
                ca += c[l[i][j]][0];
            }
            if (ans == 0) {
                ans = ca;
            } else {
                ans = min(ans, ca);
            }
        }
        cout << ans << endl;
    }
    return 0;
}