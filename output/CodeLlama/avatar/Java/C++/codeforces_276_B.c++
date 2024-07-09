#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    map<char, int> mp;
    int oddCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (mp.find(ch) != mp.end())
        {
            mp[ch]++;
        }
        else
        {
            mp[ch] = 1;
        }
    }
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            oddCount++;
        }
    }
    if (oddCount <= 1 || oddCount % 2 != 0)
    {
        cout << "First";
    }
    else
    {
        cout << "Second";
    }
    return 0;
}