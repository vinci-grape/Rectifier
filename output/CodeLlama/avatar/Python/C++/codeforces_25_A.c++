#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i] % 2;
    }
    if (sum == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                cout << i + 1;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}