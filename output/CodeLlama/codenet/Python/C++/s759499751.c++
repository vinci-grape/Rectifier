#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int c[n];
    c[0]=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]=='C' && a[i-1]=='A')
            c[i]=c[i-1]+1;
        else
            c[i]=c[i-1];
    }
    for(int w=0;w<k;w++)
    {
        int l,r;
        cin>>l>>r;
        cout<<c[r-1]-c[l-1]<<endl;
    }
    return 0;
}