#include <iostream>
using namespace std;
int main()
{
    int n, d, m = 0, q = 0;
    cin >> n >> d;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int a = 0; a < n - 1; a++)
    {
        if (x[a] >= x[a + 1])
        {
            q = (x[a] - x[a + 1]) / d + 1;
            m = m + q;
            x[a + 1] = x[a + 1] + q * d;
        }
    }
    cout << m;
    return 0;
}