#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0,min=0;
    for(int i=0;i<n;i++)
    {
        max=max(arr[i]-arr[0],arr[n-1]-arr[i]);
        if(i==0)
        {
            min=arr[i+1]-arr[i];
        }
        else if(i==n-1)
        {
            min=arr[i]-arr[i-1];
        }
        else
        {
            min=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
        }
        cout<<min<<" "<<max<<endl;
    }
}