#include <iostream>
using namespace std;
int main()
{
    int n, m, r, c;
    cin >> n >> m;
    int b[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        b[i] = 1;
    }
    b[0] = b[n - 1] = b[n] = b[2 * n - 1] = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> r >> c;
        b[r - 1] = b[n + c - 1] = 0;
    }
    if (n % 2 && b[n / 2] && b[n + n / 2])
        b[n / 2] = 0;
    int sum = 0;
    for (int i = 0; i < n * 2; i++)
    {
        sum += b[i];
    }
    cout << sum;
    return 0;
}