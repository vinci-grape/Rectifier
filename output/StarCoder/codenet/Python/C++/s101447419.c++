#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ve[n/2],vo[n/2];
    for(int i=0;i<n/2;i++)
    {
        ve[i]=v[2*i];
        vo[i]=v[2*i+1];
    }
    int ce[n/2];
    int co[n/2];
    for(int i=0;i<n/2;i++)
    {
        ce[i]=0;
        co[i]=0;
    }
    for(int i=0;i<n/2;i++)
    {
        ce[v[2*i]]++;
        co[v[2*i+1]]++;
    }
    int ans=n;
    if(ce[0]!=co[0])
    {
        ans=n-ce[0]-co[0];
    }
    else if(n%2==0)
    {
        ans=n-ce[0];
    }
    else if(ce[0]==co[1])
    {
        ans=min(n-ce[0]-co[1],n-ce[1]-co[0]);
    }
    else if(ce[1]==co[0])
    {
        ans=min(n-ce[1]-co[0],n-ce[0]-co[1]);
    }
    cout<<ans;
}