#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    reverse(arr, arr + n);
    int od = 0, sum = 0, ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
            od++;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            sum += arr[i];
        else if (ok || od > 1)
        {
            sum += arr[i];
            od--;
            ok = !ok;
        }
    }
    cout << sum;
    return 0;
}