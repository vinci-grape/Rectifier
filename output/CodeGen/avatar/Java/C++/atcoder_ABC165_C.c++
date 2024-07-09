#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[1005], b[1005], c[1005], d[1005];
int n, m, q;
long ans = -100;

void dfs(vector<int> list) {
    if (list.size() == n) {
        for (int i = 0; i < q; ++i) {
            long score = 0;
            for (int j = 0; j < q; ++j) {
                score += (list[b[j]] - list[a[j]] == c[j])? d[j] : 0;
            }
            ans = max(ans, score);
        }
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
    }
    dfs(vector<int>());
    cout << ans;
    return 0;
}