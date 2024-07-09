#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int r_cnt = count(s.begin(), s.end(), 'R');
    int g_cnt = count(s.begin(), s.end(), 'G');
    int b_cnt = count(s.begin(), s.end(), 'B');

    int ans = r_cnt * g_cnt * b_cnt;

    for (int i = 0; i < n; i++)
    {
        for (int d = 0; d < n; d++)
        {
            int j = i + d;
            int k = j + d;
            if (k >= n)
            {
                break;
            }
            if (s[i] != s[j] && s[j] != s[k] && s[k] != s[i])
            {
                ans -= 1;
            }
        }
    }

    cout << ans << endl;
}