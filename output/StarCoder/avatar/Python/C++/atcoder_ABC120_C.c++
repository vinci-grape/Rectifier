#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    int ans = min(mp.values()) * 2;
    cout << ans << endl;
    return 0;
}