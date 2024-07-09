#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> info(n);
    for (int i = 0; i < n; i++) {
        cin >> info[i].first >> info[i].second;
    }
    sort(info.begin(), info.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    vector<int> selected_only, selected_chohuku, unselected_only;
    unordered_map<int, int> memo;
    for (int i = 0; i < k; i++) {
        int t = info[i].first;
        int d = info[i].second;
        if (memo.find(t) == memo.end()) {
            memo[t] = 1;
            selected_only.push_back(d);
        } else {
            selected_chohuku.push_back(d);
        }
    }
    int cnt_type = memo.size();
    for (int i = k; i < n; i++) {
        int t = info[i].first;
        int d = info[i].second;
        if (memo.find(t) == memo.end()) {
            memo[t] = 1;
            unselected_only.push_back(d);
        }
    }
    int sum_select = 0;
    for (int i = 0; i < selected_chohuku.size(); i++) {
        sum_select += selected_chohuku[i];
    }
    for (int i = 0; i < unselected_only.size(); i++) {
        sum_select += unselected_only[i];
    }
    int ans = cnt_type * cnt_type + sum_select;
    unselected_only.resize(unselected_only.size() - 1);
    reverse(unselected_only.begin(), unselected_only.end());
    for (int i = 0; i < min(selected_chohuku.size(), unselected_only.size()); i++) {
        cnt_type += 1;
        sum_select += unselected_only[i];
        sum_select -= selected_chohuku[i];
        ans = max(ans, cnt_type * cnt_type + sum_select);
    }
    cout << ans << endl;
    return 0;
}