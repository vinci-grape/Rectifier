#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n, k;
vector<vector<int> > info;
vector<int> selected;
vector<int> selected_only;
vector<int> selected_chohuku;
vector<int> unselected_only;
int memo[100001];
int cnt_type;
int sum_select;
int ans;

void init() {
    n = 0;
    k = 0;
    info.clear();
    selected.clear();
    selected_only.clear();
    selected_chohuku.clear();
    unselected_only.clear();
    memo[0] = 1;
    cnt_type = 1;
    sum_select = 0;
    ans = 0;
}

void add(int t, int d) {
    if (t not in memo) {
        memo[t] = 1;
        selected_only.push_back(d);
    } else {
        selected_chohuku.push_back(d);
    }
}

void add_unselected(int t, int d) {
    if (t not in memo) {
        memo[t] = 1;
        unselected_only.push_back(d);
    }
}

void solve() {
    if (cnt_type == k) {
        ans = cnt_type*cnt_type + sum_select;
        return;
    }
    if (cnt_type == n) {
        ans = 0;
        return;
    }
    int tmp = cnt_type*cnt_type + sum_select;
    if (tmp > ans) {
        ans = tmp;
    }
    for (int i = 0; i < min(len(selected_chohuku), len(unselected_only)); ++i) {
        cnt_type++;
        sum_select += unselected_only[i];
        sum_select -= selected_chohuku[i];
        del unselected_only[i];
        del selected_chohuku[i];
        tmp = cnt_type*cnt_type + sum_select;
        if (tmp > ans) {
            ans = tmp;
        }
    }
}

int main() {
    init();
    int t;
    int d;
    for (int i = 0; i < n; ++i) {
        t = info[i][0];
        d = info[i][1];
        add(t, d);
    }
    for (int i = 0; i < k; ++i) {
        t = info[i][0];
        d = info[i][1];
        add_unselected(t, d);
    }
    solve();
    cout << ans << endl;
    return 0;
}