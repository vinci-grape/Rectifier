#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number[n];
    int h1 = 0, h2 = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
        if (number[i] != 4 && number[i] != 7)
        {
            cout << "NO";
            x += 1;
            break;
        }
        if (i < n / 2)
        {
            h1 += number[i];
        }
        else
        {
            h2 += number[i];
        }
    }
    if (!x)
    {
        if (h1 == h2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}