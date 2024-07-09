#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> graph(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int> counter(n);
    int a,b;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        counter[a-1]+=b;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<graph[i].size();j++){
            counter[graph[i][j]]+=counter[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<counter[i]<<" ";
    }
    cout<<endl;
    return 0;
}