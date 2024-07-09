#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
            arr.push_back(i);
    }
    if(arr.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    long long result=1;
    for(int i=1;i<arr.size();i++)
        result=(result*(arr[i]-arr[i-1]));
    cout<<result<<endl;
    return 0;
}