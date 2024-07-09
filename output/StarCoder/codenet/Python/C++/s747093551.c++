#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,X,Y;
    cin>>N>>M>>X>>Y;
    int x[N],y[M];
    for(int i=0;i<N;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<M;i++)
    {
        cin>>y[i];
    }
    if(max(max(x),X)<min(min(y),Y))
    {
        cout<<"No War";
    }
    else
    {
        cout<<"War";
    }
    return 0;
}