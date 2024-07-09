#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string inp[2];
    cin >> inp[0] >> inp[1];
    int n = stoi(inp[0]);
    int m = stoi(inp[1]);
    string ans[n];
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        string temp = "";
        for (int j = 0; j < m; j++)
        {
            if (str[j] == '-')
                temp += "-";
            else
            {
                if ((i + j) % 2 == 1)
                    temp += "W";
                else
                    temp += "B";
            }
        }
        ans[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}