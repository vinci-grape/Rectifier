#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> list1,list2;
    for(int i=0;i<a;i++)
    {
        int temp;
        cin>>temp;
        list1.push_back(temp);
    }
    for(int i=0;i<b;i++)
    {
        int temp;
        cin>>temp;
        list2.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        if(find(list1.begin(),list1.end(),i+1)!=list1.end())
            cout<<1<<" ";
        else
            cout<<2<<" ";
    }
    return 0;
}