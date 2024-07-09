#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            sum+=v[i];
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]%2!=0)
        {
            sum+=v[i];
        }
    }
    if(n%2!=0)
    {
        sum-=v[0];
    }
    cout << sum << endl;
}