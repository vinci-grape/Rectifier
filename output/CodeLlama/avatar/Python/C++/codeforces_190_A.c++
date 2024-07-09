#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n < 1)
    {
        if (m < 1)
        {
            cout << n << " " << m;
            return 0;
        }
        cout << "Impossible";
        return 0;
    }
    if (m > n)
    {
        int min = m;
        int max = n + m - 1;
        cout << min << " " << max;
    }
    if (m <= n)
    {
        int min = n;
        int max = n + m - 1;
        if (m == 0)
        {
            max = n;
        }
        cout << min << " " << max;
    }
    return 0;
}