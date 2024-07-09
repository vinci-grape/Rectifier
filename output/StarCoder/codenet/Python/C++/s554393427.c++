#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<vector<float>> mo;
    for(int i=0;i<N;i++)
    {
        float x,u;
        cin>>x>>u;
        mo.push_back({x,u});
    }
    float okz=0;
    for(auto i:mo)
    {
        if(i[1]=="JPY")
        {
            okz+=i[0];
        }
        else
        {
            okz+=i[0]*380000;
        }
    }
    cout<<okz;
    return 0;
}