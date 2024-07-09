#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool possible = true;
    for (int i = 0; i < 26; i++)
    {
        if (count(s.begin(), s.end(), i + 'a') >= n / 2 + 1)
        {
            possible = false;
            break;
        }
    }
    cout << (possible ? "YES" : "NO");
    return 0;
}