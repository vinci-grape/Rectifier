#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    if (a[1] <= a[2] || a[3] <= a[0])
    {
        cout << 0;
    }
    else
    {
        sort(a, a + 3);
        cout << a[2] - a[1];
    }
    return 0;
}