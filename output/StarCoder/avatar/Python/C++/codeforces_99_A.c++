#include <iostream>
#include <string>
using namespace std;
int main( )
{
    string l;
    cin >> l;
    l = l.substr(0, l.find('.'));
    string s = l;
    string p = l.substr(l.find('.') + 1);
    int i = stoi(p);
    if (s[s.length() - 1] == '9')
    {
        cout << "GOTO Vasilisa.";
    }
    else if (s[s.length() - 1]!= '9' && i < 5)
    {
        cout << s;
    }
    else
    {
        s = to_string(stoi(s) + 1);
        cout << s;
    }
    return 0;
}