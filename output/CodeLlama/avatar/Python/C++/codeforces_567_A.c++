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
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << arr[i + 1] - arr[i] << " " << arr[n - 1] - arr[i] << endl;
            continue;
        }
        else if (i == n - 1)
        {
            cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
            continue;
        }
        else if (arr[i] - arr[i - 1] > arr[i + 1] - arr[i])
        {
            cout << arr[i + 1] - arr[i] << " ";
        }
        else
        {
            cout << arr[i] - arr[i - 1] << " ";
        }
        if (arr[n - 1] - arr[i] > arr[i] - arr[0])
        {
            cout << arr[n - 1] - arr[i];
        }
        else
        {
            cout << arr[i] - arr[0];
        }
        cout << endl;
    }
    return 0;
}