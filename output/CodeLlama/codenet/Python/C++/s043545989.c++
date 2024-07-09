#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>B;
    for(int i=0;i<n;i++)
    {
        B[a[i]]++;
    }
    vector<int>k;
    vector<int>v;
    for(auto i:B)
    {
        k.push_back(i.first);
        v.push_back(i.second);
    }
    if(B.size()==3 && k[0]^k[1]^k[2]==0 && v[0]==v[1]==v[2])
    {
        cout<<"Yes";
    }
    else if(B.size()==2 && 0 in k && (v[0]==2*v[1] || v[1]==2*v[0]))
    {
        cout<<"Yes";
    }
    else if(B.size()==1 && 0 in k)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}