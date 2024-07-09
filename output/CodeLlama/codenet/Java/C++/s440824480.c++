#include <iostream>
using namespace std;
int main()
{
    int n, x, y, c = 0, flg = 0;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        if (x == y)
        {
            c++;
            if (c >= 3)
            {
                flg = 1;
            }
        }
        else
        {
            c = 0;
        }
    }
    if (flg == 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}