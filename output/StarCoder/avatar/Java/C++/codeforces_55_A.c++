#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,k=0,p=1;
    bool flag=true;
    int a[1000];
    cin>>n;
    while(k<=n)
    {
        i+=k;
        if(i>=n)
        {
            while(! (i<n) )
                i=i-n;
        }
        ++a[i];
        ++k;
    }
    for(i=0;i<n;i++)
        if(a[i]==0)
        {
            flag=false;
            break;
        }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}