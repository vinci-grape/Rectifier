#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    long i = 357;
    int c = 0;
    while (i <= N)
    {
        string s = to_string(i);
        if (s.find("3") != string::npos && s.find("5") != string::npos && s.find("7") != string::npos)
            c++;
        stringstream ss;
        bool f = false;
        for (int j = 0; j < s.length(); j++)
        {
            char a = s[s.length() - 1 - j];
            if (f)
            {
                ss << a;
            }
            else
            {
                if (a == '3')
                {
                    ss << '5';
                    f = true;
                }
                else if (a == '5')
                {
                    ss << '7';
                    f = true;
                }
                else
                {
                    ss << '3';
                }
            }
        }
        if (!f)
            ss << 3;
        stringstream ss2;
        ss2 << ss.str();
        ss2 << reverse(ss.str());
        i = stol(ss2.str());
    }
    cout << c << endl;
    return 0;
}