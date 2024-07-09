#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1, sumL = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            string t = s.substr(i, s.size() - i);
            int L = t.size();
            if (L > n)
            {
                cout << "Impossible" << endl;
                return 0;
            }
            if (sumL + L + (sumL > 0) > n)
            {
                ans++;
                sumL = L;
            }
            else
            {
                sumL += L + (sumL > 0);
            }
        }
    }
    cout << ans << endl;
    return 0;
}