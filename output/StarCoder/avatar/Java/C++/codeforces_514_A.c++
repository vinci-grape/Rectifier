#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    while (x > 0)
    {
        long long r = x % 10;
        if (9 - r < r)
        {
            if (x / 10 == 0 && 9 - r == 0)
                cout << r << endl;
            else
                cout << 9 - r << endl;
        }
        else
            cout << r << endl;
        x = x / 10;
    }
    return 0;
}