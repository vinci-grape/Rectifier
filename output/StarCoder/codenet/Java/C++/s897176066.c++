#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}