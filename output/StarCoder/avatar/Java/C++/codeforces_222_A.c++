#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l=0,c=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==l)
        {
            c++;
        }
        else
        {
            c=1;
        }
        l=a;
    }
    if(c+k>n)
    {
        cout<<n-c;
    }
    else
    {
        cout<<-1;
    }
}