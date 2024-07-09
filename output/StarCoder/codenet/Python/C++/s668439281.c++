#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> ls(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ls[i];
    }
    map<string, int> c;
    for (int i = 0; i < n; i++)
    {
        c[ls[i]]++;
    }
    int count = c.begin()->second;
    vector<string> ans;
    for (auto i : c)
    {
        if (i.second == count)
        {
            ans.push_back(i.first);
        }
        else
        {
            break;
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}