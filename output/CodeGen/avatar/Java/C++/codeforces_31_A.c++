#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 0, j = 0, i = 0;
    for (k = 0; k < n; k++)
    {
        int t = a[k];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (i!= j && t == (a[i] + a[j]))
                {
                    break;
                }
            }
            if (j < n - 1)
            {
                break;
            }
        }
        if (j < n - 1)
        {
            break;
        }
    }
    if (k < n)
    {
        cout << k + 1 << " " << (j + 1) << " " << (i + 1) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}