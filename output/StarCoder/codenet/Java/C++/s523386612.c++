#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count[t+1];
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        count[x]++;
    }
    for(int i=1;i<t+1;i++)
    {
        cout<<count[i]<<endl;
    }
}