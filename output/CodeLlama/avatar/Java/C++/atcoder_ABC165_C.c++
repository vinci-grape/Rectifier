#include <bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int c[100000];
int d[100000];
int n, m, q;
long long ans = -100LL;
void dfs(vector<int> &list) {
    if (list.size() == n) {
        long long score = 0LL;
        for (int i = 0; i < q; ++i) {
            score += (list[b[i]] - list[a[i]] == c[i]) ? d[i] : 0LL;
        }
        ans = max(ans, score);
        return;
    }
    if (!list.empty()) {
        for (int num = list.back(); num <= m; ++num) {
            list.push_back(num);
            dfs(list);
            list.pop_back();
        }
    } else {
        for (int num = 1; num <= m; ++num) {
            list.push_back(num);
            dfs(list);
            list.pop_back();
        }
    }
}
int main() {
    cin >> n >> m >> q;
    for (int i = 0; i < q; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        --a[i];
        --b[i];
    }
    vector<int> list;
    dfs(list);
    cout << ans << endl;
    return 0;
}