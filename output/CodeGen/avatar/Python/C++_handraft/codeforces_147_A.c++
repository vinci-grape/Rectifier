#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    string s;
    cin >> s;
    string res = "";
    for ( int i = 0; i < s.size(); ++i )
    {
        if ( i >= 1 )
        {
            if ( s[i] ==' ' )
            {
                if ( res[res.size() - 1] ==' ' )
                    continue;
                else
                    res +=' ';
            }
            else
            {
                if ( s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?' )
                {
                    if ( res[res.size() - 1] ==' ' )
                        res.pop_back();
                    res += s[i];
                    res +=' ';
                }
                else
                {
                    res += s[i];
                }
            }
        }
        else
        {
            if ( s[i] ==' ' )
                continue;
            else
                res += s[i];
        }
    }
    cout << res.substr(0, res.size() - 1) << endl;
    return 0;
}