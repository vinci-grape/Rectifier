#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        s1+=a[i];
        s2+=b[i];
    }
    if(s1>s2)
    {
        cout<<"A";
    }
    else if(s1<s2)
    {
        cout<<"G";
    }
    else
    {
        cout<<"Tie";
    }
    return 0;
}