#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    int cnt=0;
    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    string a=arr[0];
    cnt++;
    for(int i=0;i<n;i++)
    {
        if(a==arr[i])
        {

        }
        else
        {
            cnt++;
        }
        a=arr[i];
    }
    cout<<cnt;
}