#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<vector<int>> G(N+1);
    for(int i=0;i<M;i++)
    {
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> col(N+1,-1);
    int cnt=0;
    for(int i=1;i<=N;i++)
    {
        if(col[i]<0)
        {
            col[i]=cnt;
            queue<int> que;
            que.push(i);
            while(!que.empty())
            {
                int x=que.front();
                que.pop();
                for(int y:G[x])
                {
                    if(col[y]<0)
                    {
                        col[y]=cnt;
                        que.push(y);
                    }
                }
            }
            cnt++;
        }
    }
    int cmax=*max_element(col.begin(),col.end());
    cout<<cmax;
    return 0;
}