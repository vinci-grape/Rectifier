#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int d, g;
    cin >> d >> g;
    
    vector<pair<int, int>> pc(d);
    for (int i = 0; i < d; i++) {
        cin >> pc[i].first >> pc[i].second;
    }

    int ans = INT_MAX;
    
    for (int bit = 0; bit < (1 << d); bit++) {
        int count = 0;
        int sum = 0;
        set<int> nokori;
        
        for (int i = 0; i < d; i++) {
            if (bit & (1 << i)) {
                sum += pc[i].first * (i + 1) * 100 + pc[i].second;
                count += pc[i].first;
                nokori.erase(i + 1);
            } else {
                nokori.insert(i + 1);
            }
        }
        
        if (sum < g) {
            int use = *nokori.rbegin();
            int n = min(pc[use - 1].first, (int)ceil((g - sum) / (use * 100.0)));
            count += n;
            sum += n * use * 100;
        }
        
        if (sum >= g) {
            ans = min(ans, count);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}