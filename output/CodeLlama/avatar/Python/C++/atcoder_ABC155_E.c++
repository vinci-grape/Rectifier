#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int pmin = 1000;
    int mmin = 0;
    s = "0" + s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        int v = s[i] - '0';
        int npmin = min(pmin + 10 - (v + 1), mmin + 10 - v);
        int nmmin = min(pmin + v + 1, mmin + v);
        pmin = npmin;
        mmin = nmmin;
    }
    cout << min(pmin, mmin);
}