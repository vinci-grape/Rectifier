#include <iostream>
using namespace std;
int main()
{
    string s, p;
    cin >> s;
    cin >> p;
    int i = stoi(p.substr(0, 1));
    if (s[s.length() - 1] == '9')
    {
        cout << "GOTO Vasilisa.";
    }
    else if (s[s.length() - 1] != '9' && i < 5)
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