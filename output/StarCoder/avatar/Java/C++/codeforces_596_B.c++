#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long answer = abs(arr[0]);
    for (int i = 1; i < n; i++)
    {
        answer += abs(arr[i] - arr[i - 1]);
    }
    cout << answer << endl;
    return 0;
}