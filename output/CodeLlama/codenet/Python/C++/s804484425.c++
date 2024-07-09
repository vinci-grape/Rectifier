#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> info(n);
    for (int i = 0; i < n; i++) {
        cin >> info[i].first >> info[i].second;
    }
    sort(info.begin(), info.end(), greater<pair<int, int>>());
    vector<int> selected(k);
    vector<int> selected_only;
    vector<int> selected_chohuku;
    vector<int> unselected_only;
    map<int, int> memo;
    for (int i = 0; i < k; i++) {
        if (memo.count(info[i].first) == 0) {
            memo[info[i].first] = 1;
            selected_only.push_back(info[i].second);
        } else {
            selected_chohuku.push_back(info[i].second);
        }
    }
    int cnt_type = memo.size();
    for (int i = k; i < n; i++) {
        if (memo.count(info[i].first) == 0) {
            memo[info[i].first] = 1;
            unselected_only.push_back(info[i].second);
        }
    }
    int sum_select = 0;
    for (int i = 0; i < selected_chohuku.size(); i++) {
        sum_select += selected_chohuku[i];
    }
    for (int i = 0; i < selected_only.size(); i++) {
        sum_select += selected_only[i];
    }
    int ans = cnt_type * cnt_type + sum_select;
    reverse(unselected_only.begin(), unselected_only.end());
    for (int i = 0; i < min(selected_chohuku.size(), unselected_only.size()); i++) {
        cnt_type++;
        sum_select += unselected_only.back();
        sum_select -= selected_chohuku.back();
        unselected_only.pop_back();
        selected_chohuku.pop_back();
        ans = max(ans, cnt_type * cnt_type + sum_select);
    }
    cout << ans << endl;
}