#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,ql,qr;
    cin>>n>>l>>r>>ql>>qr;
    int w[n],sum[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        sum[i+1]=sum[i]+w[i];
    }
    long long int min=1e18;
    for(int i=0;i<=n;i++)
    {
        int lCount=i;
        int rCount=n-lCount;
        long long int cand=sum[lCount]*l+(sum[n]-sum[lCount])*r;
        int llCount=max(0,lCount-rCount-1);
        int rrCount=max(0,rCount-lCount-1);
        cand+=llCount*ql;
        cand+=rrCount*qr;
        min=min(min,cand);
    }
    cout<<min;
}