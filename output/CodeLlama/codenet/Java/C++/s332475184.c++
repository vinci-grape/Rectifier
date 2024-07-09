#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> graph(n);
    vector<int> counter(n);
    int a,b;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        counter[a-1]+=b;
    }
    dfs(0,-1,0);
    for(int i=0;i<n;i++)
    {
        cout<<counter[i]<<" ";
    }
    return 0;
}

void dfs(int v,int par,long val)
{
    for(int i: graph[v])
    {
        if(i!=par)
        {
            dfs(i,v,val+counter[v]);
        }
    }
    counter[v]+=val;
}