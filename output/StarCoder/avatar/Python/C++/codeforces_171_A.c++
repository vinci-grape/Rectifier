#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int x = max(a.length(), b.length());
    a = a.rjust(x, '0');
    b = b.ljust(x, '0');
    string s = "";
    int c = 0;
    for(int i = 0; i < x; i++)
    {
        int d = (b[i] - '0') + (a[x - i - 1] - '0') + c;
        if(d > 9)
        {
            s += (d % 10) + '0';
            c = 1;
        }
        else
        {
            s += d + '0';
            c = 0;
        }
    }
    if(c == 1)
        s += '1';
    cout << s.substr(0, s.length() - 1) << endl;
    return 0;
}