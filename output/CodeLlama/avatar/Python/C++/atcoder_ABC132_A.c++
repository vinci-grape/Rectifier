#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> c;
    set<char> sa;
    for (int i = 0; i < s.length(); i++)
    {
        c[s[i]]++;
        sa.insert(s[i]);
    }
    if (sa.size() != 2)
    {
        cout << "No";
        return 0;
    }
    for (auto i : sa)
    {
        if (c[i] != 2)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}