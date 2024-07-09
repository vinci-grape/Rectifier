#include <iostream>
using namespace std;
int main()
{
    int r, D, x;
    cin >> r >> D >> x;
    for (int i = 2; i <= 12; i++)
    {
        cout << int((r ^ (i - 1)) * (x + D / (1 - r)) - D / (1 - r)) << endl;
    }
    return 0;
}