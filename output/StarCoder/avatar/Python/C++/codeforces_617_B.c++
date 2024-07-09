#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    if (a.find("1") == string::npos)
        cout << 0;
    else
    {
        vector<string> v;
        string s = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '1')
            {
                v.push_back(s);
                s = "";
            }
            else
                s += a[i];
        }
        v.push_back(s);
        int ans = 1;
        for (int i = 0; i < v.size(); i++)
            ans *= (v[i].size() + 1);
        cout << ans;
    }
    return 0;
}