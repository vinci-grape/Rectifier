#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, string> m;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        m[i] = s;
    }
    bool ans = true;
    map<int, string> past;
    string next = "";
    for (int i = 0; i < N; i++)
    {
        if (past.find(m[i])!= past.end())
        {
            ans = false;
            break;
        }
        past[i] = m[i];
        if (i!= 0)
        {
            if (next!= m[i][0])
            {
                ans = false;
                break;
            }
        }
        next = m[i][m[i].size() - 1];
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}