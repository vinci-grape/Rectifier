#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    sort(a,a+n,[](int x,int y){return x[0]<y[0];});
    int ans=100;
    for(int i=0;i<n;i++)
    {
        int p=a[i][0]-a[0][0];
        int q=a[i][1]-a[0][1];
        ans=min(ans,check(p,q,n));
    }
    for(int i=0;i<n;i++)
    {
        int p=a[i][1]-a[0][1];
        int q=a[i][0]-a[0][0];
        ans=min(ans,check(p,q,n));
    }
    cout<<ans<<endl;
    return 0;
}
int check(int p,int q,int n)
{
    int ans=0;
    bool taken[n];
    for(int i=0;i<n;i++)
    {
        taken[i]=false;
    }
    while(true)
    {
        bool added=false;
        int start=0;
        int x=-1;
        int y=-1;
        for(int i=0;i<n;i++)
        {
            if(!taken[i])
            {
                added=true;
                ans++;
                taken[i]=true;
                x=a[i][0]+p;
                y=a[i][1]+q;
                break;
            }
        }
        if(!added) break;
        for(int i=start+1;i