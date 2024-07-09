#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    set<long long> s;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k!= 0)
        {
            count++;
            s.insert(arr[i]);
        }
        else if (!s.count(arr[i] / k))
        {
            count++;
            s.insert(arr[i]);
        }
    }
    cout << count << endl;
    return 0;
}