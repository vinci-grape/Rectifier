#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a,b;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a.count(i)+b.count(i)<<endl;
    }
}