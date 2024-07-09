#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,L;
    cin>>N>>L;
    vector<int> aji;
    for(int i=1;i<=N;i++)
    {
        aji.push_back(L+i-1);
    }
    if(min(aji)>=0)
    {
        aji.erase(aji.begin()+aji.index(min(aji)));
    }
    else if(max(aji)<=0)
    {
        aji.erase(aji.begin()+aji.index(max(aji)));
    }
    else
    {
        aji.erase(aji.begin()+aji.index(min(aji,key=abs)));
    }
    cout<<accumulate(aji.begin(),aji.end(),0);
    return 0;
}