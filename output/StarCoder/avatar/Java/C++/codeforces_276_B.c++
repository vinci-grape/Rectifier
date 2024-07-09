#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    int odd = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (mp.find(str[i])!= mp.end())
        {
            mp[str[i]]++;
        }
        else
        {
            mp[str[i]] = 1;
        }
    }
    for (auto it = mp.begin(); it!= mp.end(); it++)
    {
        if (it->second % 2!= 0)
        {
            odd++;
        }
    }
    if (odd <= 1 || odd % 2!= 0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
    return 0;
}