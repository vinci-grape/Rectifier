#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    int l[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i];
    }
    sort(l,l+n);
    for(i=0;i<n;i++)
    {
        if(l[i]>c)
        {
            c++;
        }
    }
    cout<<c+1;
    return 0;
}