#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    int t, d;
};

bool compare(const Info& a, const Info& b) {
    return a.d > b.d;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<Info> info(n);
    for (int i = 0; i < n; i++) {
        cin >> info[i].t >> info[i].d;
    }
    
    sort(info.begin(), info.end(), compare);
    
    vector<int> selected_only;
    vector<int> selected_chohuku;
    vector<int> unselected_only;
    int cnt_type = 0;
    long long sum_select = 0;
    int ans = 0;
    vector<bool> memo(100001, false);
    
    for (int i = 0; i < k; i++) {
        int t = info[i].t;
        int d = info[i].d;
        
        if (!memo[t]) {
            memo[t] = true;
            selected_only.push_back(d);
            cnt_type++;
        } else {
            selected_chohuku.push_back(d);
        }
    }
    
    for (int i = k; i < n; i++) {
        int t = info[i].t;
        int d = info[i].d;
        
        if (!memo[t]) {
            memo[t] = true;
            unselected_only.push_back(d);
        }
    }
    
    for (int i = 0; i < selected_chohuku.size(); i++) {
        sum_select += selected_chohuku[i];
    }
    
    for (int i = 0; i < selected_only.size(); i++) {
        sum_select += selected_only[i];
    }
    
    ans = cnt_type * cnt_type + sum_select;
    
    reverse(unselected_only.begin(), unselected_only.end());
    
    for (int i = 0; i < min(selected_chohuku.size(), unselected_only.size()); i++) {
        sum_select += unselected_only[i];
        sum_select -= selected_chohuku[i];
        cnt_type++;
        int tmp = cnt_type * cnt_type + sum_select;
        ans = max(ans, tmp);
    }
    
    cout << ans << endl;
    
    return 0;
}