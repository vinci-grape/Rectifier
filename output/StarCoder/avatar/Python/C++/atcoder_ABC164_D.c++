#include <iostream>
using namespace std;
int main()
{
    string s, l;
    cin >> s >> l;
    int m[l], a, r;
    m[0] = 1;
    a = r = 0;
    for (int i = 0; i < s.length(); i++)
    {
        a += (int)(s[i]) * pow(10, i, l);
        r += m[a % l];
        m[a % l]++;
    }
    cout << r;
    return 0;
}