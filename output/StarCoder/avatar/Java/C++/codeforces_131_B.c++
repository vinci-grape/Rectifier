#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[21];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    long long int res=0;
    for(int i=0;i<10;i++)
    {
        res+=arr[i]*arr[20-i];
    }
    res+=(arr[10]*(arr[10]-1))/2;
    cout << res;
}