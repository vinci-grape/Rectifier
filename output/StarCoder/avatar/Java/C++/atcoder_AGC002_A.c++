#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > 0)
    {
        cout << "Positive" << endl;
    }
    else if (b >= 0)
    {
        cout << "Zero" << endl;
    }
    else if ((b - a + 1) % 2 == 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
    return 0;
}