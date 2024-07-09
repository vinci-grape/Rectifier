#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> col(N+1,-1);
    int cnt = 0;
    for(int i=1;i<=N;i++)
    {
        if(col[i]==-1)
        {
            col[i]=cnt;
            queue<int> que;
            que.push(i);
            while(!que.empty())
            {
                int x = que.front();
                que.pop();
                for(int y:G[x])
                {
                    if(col[y]==-1)
                    {
                        col[y]=cnt;
                        que.push(y);
                    }
                }
            }
            cnt++;
        }
    }
    cout<<*max_element(col.begin(),col.end())<<endl;
}