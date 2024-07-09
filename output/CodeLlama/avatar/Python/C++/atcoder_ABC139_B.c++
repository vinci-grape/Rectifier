#include <iostream>
using namespace std;
int main()
{
    int a, b, hole, i, check;
    cin >> a >> b;
    hole = 1;
    i = 0;
    check = true;
    while (check)
    {
        if (hole >= b)
        {
            check = false;
        }
        else
        {
            hole = a * (i + 1) - i;
            i++;
        }
    }
    cout << i;
    return 0;
}