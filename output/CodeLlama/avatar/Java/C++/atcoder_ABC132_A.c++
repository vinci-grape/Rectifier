#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (!mp.count(s[i]))
            mp[s[i]] = 1;
        else
            mp[s[i]]++;
    }
    bool ok = true;
    for (auto c : mp)
    {
        if (c.second != 2)
        {
            ok = false;
            break;
        }
    }
    if (ok && mp.size() == 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}