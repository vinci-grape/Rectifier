#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int num;
        cin >> num;
        if (mp.lower_bound(num) == mp.end())
        {
            int val = mp.count(num);
            mp[num] = ++val;
        }
        else
        {
            int key = mp.lower_bound(num)->first;
            int val = mp[key];
            if (val == 1)
            {
                mp.erase(key);
            }
            else
            {
                mp[key] = --val;
            }
            val = mp.count(num);
            mp[num] = ++val;
        }
    }
    int ans = 0;
    for (auto it : mp)
    {
        int val = it.second;
        ans += val;
    }
    cout << ans << endl;
    return 0;
}