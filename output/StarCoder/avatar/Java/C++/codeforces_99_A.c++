#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int dot = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '.')
        {
            dot = i;
            break;
        }
    if (s[dot - 1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
    }
    else if (s[dot + 1] - '0' > 4)
    {
        string _s = "";
        for (int i = 0; i < dot; i++)
            _s += s[i];
        cout << stoll(_s) + 1 << endl;
    }
    else
    {
        for (int i = 0; i < dot; i++)
            cout << s[i];
        cout << endl;
    }
}