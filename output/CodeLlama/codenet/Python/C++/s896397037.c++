#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[1] && s[0] != s[2] && s[2] == s[3])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}