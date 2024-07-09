#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.length();
    int k;
    cin >> k;
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        string input;
        cin >> input;
        int a = 0, b = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == input[0])
                a++;
            else if (s[j] == input[1])
                b++;
            else
            {
                res += min(a, b);
                a = b = 0;
            }
        }
        res += min(a, b);
    }
    cout << res << endl;
    return 0;
}