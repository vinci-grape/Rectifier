#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x = 1;
    cin >> n;
    while (pow(2, floor(log2(n)))!= n)
    {
        x++;
        n -= pow(2, floor(log2(n)));
    }
    cout << x << endl;
    return 0;
}