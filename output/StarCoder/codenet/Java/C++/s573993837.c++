#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==m)
        {
            cout<<0<<endl;
            continue;
        }
        if(n>m)
        {
            n=m+n%m;
            n-=m;
            cout<<min(m-n,n)<<endl;
            continue;
        }
        cout<<min(m-n,n)<<endl;
    }
    return 0;
}