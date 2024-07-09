#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string res;
    string punctuation = ",.!?";
    for (int i = 0; i < s.length(); i++)
    {
        if (i >= 1)
        {
            if (s[i] =='')
            {
                if (res[res.length() - 1]!='')
                {
                    res += s[i];
                }
                else
                {
                    continue;
                }
            }
            else
            {
                if (s[i] == punctuation[0])
                {
                    if (res[res.length() - 1] =='')
                    {
                        res.pop_back();
                    }
                    res += s[i];
                    res +='';
                }
                else if (s[i] == punctuation[1])
                {
                    if (res[res.length() - 1] =='')
                    {
                        res.pop_back();
                    }
                    res += s[i];
                    res +='';
                }
                else if (s[i] == punctuation[2])
                {
                    if (res[res.length() - 1] =='')
                    {
                        res.pop_back();
                    }
                    res += s[i];
                    res +='';
                }
                else if (s[i] == punctuation[3])
                {
                    if (res[res.length() - 1] =='')
                    {
                        res.pop_back();
                    }
                    res += s[i];
                    res +='';
                }
                else
                {
                    res += s[i];
                }
            }
        }
        else
        {
            if (s[i] =='')
            {
                continue;
            }
            if (s[i] == punctuation[0])
            {
                continue;
            }
            else if (s[i] == punctuation[1])
            {
                continue;
            }
            else if (s[i] == punctuation[2])
            {
                continue;
            }
            else if (s[i] == punctuation[3])
            {
                continue;
            }
            else
            {
                res += s[i];
            }
        }
    }
    cout << res;
    return 0;
}