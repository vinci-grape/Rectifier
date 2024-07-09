#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int p,x;
        cin>>p>>x;
        int s=0;
        for(int j=0;j<n;j++)
        {
            if(j==p-1)
            {
                s+=x;
            }
            else
            {
                s+=t[j];
            }
        }
        cout<<s<<endl;
    }
}