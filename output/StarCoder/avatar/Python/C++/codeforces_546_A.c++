#include <iostream>
using namespace std;
int main()
{
    int k, n, w, total = 0;
    cin >> k >> n >> w;
    if (1 <= k && k <= 1000 && 1 <= w && w <= 1000)
    {
        for (int i = 1; i <= w; i++)
        {
            total += i * k;
        }
        if (total > n)
        {
            cout << total - n;
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}