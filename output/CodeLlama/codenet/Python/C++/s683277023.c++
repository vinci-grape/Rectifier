#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> li;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        li.push_back(x);
    }
    sort(li.begin(),li.end());
    vector<int> tmp;
    for(int i=0;i<k;i++)
    {
        tmp.push_back(li[i]);
    }
    int sum = 0;
    for(int i=0;i<tmp.size();i++)
    {
        sum += tmp[i];
    }
    cout<<sum<<endl;
    return 0;
}