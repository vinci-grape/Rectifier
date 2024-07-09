#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    cout << a.substr(a.find_first_not_of('0'));
    cout << (a.find('1') == string::npos ? 0 : accumulate(next(find(s.begin(), s.end(), '1')), s.end(), 1, [](int a, char b) { return a * (b - '0' + 1); }));
    return 0;
}