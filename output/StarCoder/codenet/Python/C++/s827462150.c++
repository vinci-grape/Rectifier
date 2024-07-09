#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    int x = 1, y = 1, z = 1;
    while (x * x + y * y + z * z + x * y + y * z + z * x <= n)
    {
        while (x * x + y * y + z * z + x * y + y * z + z * x <= n)
        {
            while (x * x + y * y + z * z + x * y + y * z + z * x <= n)
            {
                int i = x * x + y * y + z * z + x * y + y * z + z * x;
                A[i - 1]++;
                z++;
            }
            z = 1;
            y++;
        }
        y = 1;
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}