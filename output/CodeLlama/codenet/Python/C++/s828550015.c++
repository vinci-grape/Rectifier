#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    vector<int> p,q,r;
    for(int i=0;i<x;i++)
    {
        int temp;
        cin>>temp;
        p.push_back(temp);
    }
    for(int i=0;i<y;i++)
    {
        int temp;
        cin>>temp;
        q.push_back(temp);
    }
    for(int i=0;i<c;i++)
    {
        int temp;
        cin>>temp;
        r.push_back(temp);
    }
    sort(p.begin(),p.end(),greater<int>());
    sort(q.begin(),q.end(),greater<int>());
    sort(r.begin(),r.end(),greater<int>());
    vector<int> pq;
    for(int i=0;i<x+y;i++)
    {
        if(i<x)
            pq.push_back(p[i]);
        else
            pq.push_back(q[i-x]);
    }
    for(int i=0;i<min(x+y,a+b,c);i++)
    {
        if(pq[i]<r[i])
            pq[i]=r[i];
    }
    int sum=0;
    for(int i=0;i<min(x+y,a+b,c);i++)
        sum+=pq[i];
    cout<<sum;
    return 0;
}