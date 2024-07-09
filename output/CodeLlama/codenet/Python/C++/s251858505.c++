#include <iostream>
using namespace std;
int main()
{
    int n, i, j, a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            j++;
    }
    cout << j;
    return 0;
}