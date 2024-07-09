#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long h[n];
    bool ans[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        ans[i]=true;
    }
    for(int i=0;i<m;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(h[temp1-1]<h[temp2-1])
        {
            ans[temp1-1]=false;
        }
        else if(h[temp1-1]>h[temp2-1])
        {
            ans[temp2-1]=false;
        }
        else
        {
            ans[temp1-1]=false;
            ans[temp2-1]=false;
        }
    }
    int ans2=0;
    for(int i=0;i<n;i++)
    {
        if(ans[i])
        {
            ans2++;
        }
    }
    cout<<ans2<<endl;
}