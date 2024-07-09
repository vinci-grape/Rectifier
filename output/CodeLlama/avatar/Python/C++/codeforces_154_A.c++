#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        int a = 0, b = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == x[0])
                a++;
            else if (s[j] == x[1])
                b++;
            else
            {
                ans += min(a, b);
                a = 0;
                b = 0;
            }
        }
        ans += min(a, b);
    }
    cout << ans;
    return 0;
}