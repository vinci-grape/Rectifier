#include <iostream>
using namespace std;
int main()
{
    int x, y, a;
    cin >> x >> y;
    a = 0;
    while (x >= 0 && y >= 22 || x >= 1 && y >= 12 || x >= 2 && y >= 2)
    {
        if (a)
        {
            if (y >= 22)
                y -= 22;
            else if (x >= 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
            }
            else
            {
                x -= 2;
                y -= 2;
            }
        }
        else
        {
            if (x >= 2 && y >= 2)
            {
                x -= 2;
                y -= 2;
            }
            else if (x >= 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
            }
            else
            {
                y -= 22;
            }
        }
        a = 1 - a;
    }
    if (a)
        cout << "Hanako";
    else
        cout << "Ciel";
    return 0;
}