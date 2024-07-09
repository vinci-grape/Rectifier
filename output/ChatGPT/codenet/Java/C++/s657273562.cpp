#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    if (n >= 3) {
        map<pair<int, int>, int, greater<pair<int, int>>> mp;
        long long ans = arr[0] + arr[1];
        mp[{arr[0], arr[1]}] = 1;
        pair<int, int> p1 = {arr[2], arr[1]};
        pair<int, int> p2 = {arr[2], arr[0]};
        mp[p1]++;
        mp[p2]++;
        for (int i = 3; i < n; i++) {
            pair<int, int> p = mp.begin()->first;
            mp.begin()->second--;
            if (mp.begin()->second == 0) {
                mp.erase(mp.begin());
            }
            ans += min(p.first, p.second);
            mp[{p.first, arr[i]}]++;
            mp[{p.second, arr[i]}]++;
        }
        cout << ans << endl;
    } else {
        cout << arr[0] << endl;
    }
    return 0;
}