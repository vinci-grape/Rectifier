#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.find("0") == string::npos)
    {
        cout << n - 1 << endl;
    }
    else
    {
        vector<int> indices;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                indices.push_back(i);
        }
        if (indices.size() == 1)
        {
            cout << n << endl;
        }
        else
        {
            int maximum = 0;
            for (int i = 0; i < indices.size(); i++)
            {
                for (int j = i + 1; j < indices.size(); j++)
                {
                    maximum = max(maximum, 2 + 2 * (abs(indices[i] - indices[j]) - 1) - (abs(i - j) - 1));
                }
            }
            cout << s.size() - s.count('1') + maximum << endl;
        }
    }
    return 0;
}