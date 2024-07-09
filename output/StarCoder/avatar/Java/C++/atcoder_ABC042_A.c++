#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s[0] - '0';
    int a = s[2] - '0';
    int y = s[4] - '0';
    string h = "NO";
    if (x == 5 || x == 7 || a == 5 || a == 7 || y == 5 || y == 7)
    {
        if (x + y + a == 17)
        {
            h = "YES";
        }
    }
    cout << h << endl;
    return 0;
}