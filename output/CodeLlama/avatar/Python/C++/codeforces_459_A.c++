#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1, y1, x2, y2, d, numerator, denominator, quotient;
    cin >> x1 >> y1 >> x2 >> y2;
    denominator = x2 - x1;
    numerator = y2 - y1;
    if (denominator != 0)
    {
        quotient = numerator / denominator;
        if (numerator == 0)
        {
            d = int(sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
            x4 = x1;
            x3 = x2;
            y3 = y2 + d;
            y4 = y1 + d;
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else if (denominator == 0)
        {
            y4 = y2;
            y3 = y1;
            d = int(sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
            x4 = x1 + d;
            x3 = x2 + d;
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else if (quotient == 1)
        {
            x4 = x2;
            x3 = x1;
            y4 = y1;
            y3 = y2;
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else if (quotient == -1)
        {
            x4 = x1;
            x3 = x2;
            y4 = y2;
            y3 = y1;
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}