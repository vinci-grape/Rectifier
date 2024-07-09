#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cin >> a >> b;
    for (int i = 0; i < 2; i++)
    {
        c += max(a, b);
        if (a >= b)
            a--;
        else
            b--;
    }
    cout << c;
    return 0;
}