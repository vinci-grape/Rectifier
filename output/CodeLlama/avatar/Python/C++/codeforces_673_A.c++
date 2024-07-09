#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (arr[0] > 15)
    {
        cout << 15;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > 15)
            {
                cout << arr[i - 1] + 15;
                break;
            }
        }
        if (arr[n - 1] == 90 || arr[n - 1] + 15 >= 90)
        {
            cout << 90;
        }
        else
        {
            cout << arr[n - 1] + 15;
        }
    }
    return 0;
}