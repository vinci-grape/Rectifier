#include <iostream>
using namespace std;
int main()
{
    int a, b, res;
    cin >> a >> b;
    res = a;
    while (a >= b)
    {
        res += (a / b);
        a = (a / b) + (a % b);
    }
    cout << res;
    return 0;
}