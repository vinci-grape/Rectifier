#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, k;
    cin >> num >> k;
    int arr[num];
    set<int> different;
    int temp = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + num);
    for (int i = 0; i < num; i++)
    {
        if ((arr[i] % k != 0) || (arr[i] / k != arr[i] / k))
        {
            different.insert(arr[i]);
        }
        temp = max(temp, different.size());
    }
    cout << temp;
    return 0;
}