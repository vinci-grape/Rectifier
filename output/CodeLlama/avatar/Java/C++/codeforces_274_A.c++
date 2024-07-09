#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long k;
    cin >> n >> k;
    long arr[n];
    set<long> set;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k != 0)
        {
            count++;
            set.insert(arr[i]);
        }
        else if (!set.count(arr[i] / k))
        {
            count++;
            set.insert(arr[i]);
        }
    }
    cout << count << endl;
}