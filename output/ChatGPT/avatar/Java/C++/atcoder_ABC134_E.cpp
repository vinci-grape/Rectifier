#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;

    while (n--) {
        int num;
        cin >> num;

        if (mp.lower_bound(num) == mp.begin()) {
            int val = mp[num];
            mp[num] = ++val;
        } else {
            auto it = mp.lower_bound(num);
            it--;

            int key = it->first;
            int val = it->second;

            if (val == 1) {
                mp.erase(key);
            } else {
                mp[key] = --val;
            }

            val = mp[num];
            mp[num] = ++val;
        }
    }

    int ans = 0;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        int val = it->second;
        ans += val;
    }

    cout << ans << endl;

}