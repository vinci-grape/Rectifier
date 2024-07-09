#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 1, sumL = 0;
    cin >> n;
    string s;
    while (cin >> s)
    {
        int L = s.length();
        if (L > 1)
        {
            if (L > n)
            {
                cout << "Impossible";
                return 0;
            }
            if (sumL + L + (sumL > 0) > n)
            {
                ans++;
                sumL = L;
            }
            else
            {
                sumL = sumL + L + (sumL > 0);
            }
        }
    }
    cout << ans;
    return 0;
}