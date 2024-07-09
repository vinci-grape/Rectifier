#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    int p[x],q[y],r[c];
    for(int i=0;i<x;i++)
        cin>>p[i];
    for(int i=0;i<y;i++)
        cin>>q[i];
    for(int i=0;i<c;i++)
        cin>>r[i];
    sort(p,p+x,greater<int>());
    sort(q,q+y,greater<int>());
    sort(r,r+c,greater<int>());
    int pq[x+y];
    for(int i=0;i<x+y;i++)
        pq[i]=p[i%x]+q[i%y];
    sort(pq,pq+x+y,greater<int>());
    for(int i=0;i<min(x+y,a+b,c);i++)
        pq[i]=min(pq[i],r[i]);
    cout<<accumulate(pq,pq+x+y,0);
    return 0;
}