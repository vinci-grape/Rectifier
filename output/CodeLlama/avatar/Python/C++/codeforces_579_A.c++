#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    x = 1;
    cout << log2(n) << endl;
    while (log2(n) % 1)
    {
        x += 1;
        n -= pow(2, (int)log2(n));
    }
    cout << x << endl;
    return 0;
}