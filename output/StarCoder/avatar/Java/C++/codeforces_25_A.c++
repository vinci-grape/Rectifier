#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int odd=0,even=0,odd_ind=0,even_ind=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
            even_ind=i;
        }
        else
        {
            odd++;
            odd_ind=i;
        }
    }
    if(odd>even)
    {
        cout<<even_ind<<endl;
    }
    else
    {
        cout<<odd_ind<<endl;
    }
    return 0;
}