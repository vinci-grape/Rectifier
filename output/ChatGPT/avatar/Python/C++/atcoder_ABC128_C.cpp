#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> li(m);
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            li[i].push_back(x);
        }
    }

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    set<int> q;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < li[i].size(); j++) {
            q.insert(li[i][j]);
        }
    }

    set<int> r;
    for (int i = 1; i <= n; i++) {
        r.insert(i);
    }

    set<int> v;
    set_difference(r.begin(), r.end(), q.begin(), q.end(), inserter(v, v.begin()));

    int ans = 0;

    for (int i = 0; i <= q.size(); i++) {
        vector<int> s(i);
        for (int j = 0; j < i; j++) {
            s[j] = 1;
        }

        do {
            bool valid = true;
            for (int k = 0; k < m; k++) {
                int count = 0;
                for (int j = 0; j < li[k].size(); j++) {
                    if (binary_search(s.begin(), s.end(), li[k][j])) {
                        count++;
                    }
                }

                if (count % 2 != p[k]) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans += pow(2, v.size());
            }
        } while (next_permutation(s.begin(), s.end()));
    }

    cout << ans << endl;

}