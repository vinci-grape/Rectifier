#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int *lst = new int[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            int total = 0;
            while (a > 0 && b > 0)
            {
                total += a / b;
                a = a % b;
                if (a > 0)
                {
                    total += b / a;
                    b = b % a;
                }
            }
            lst[i] = total;
        }
        else if (a < b)
        {
            int total = 0;
            while (a > 0 && b > 0)
            {
                total += b / a;
                b = b % a;
                if (b > 0)
                {
                    total += a / b;
                    a = a % b;
                }
            }
            lst[i] = total;
        }
        else
        {
            lst[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << lst[i] << endl;
    }
    return 0;
}