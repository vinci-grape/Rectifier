#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    while(m--)
    {
        a[n-1] /= 2;
        m--;
        int i = n-2;
        while(m && (-n<=i && a[i]>=a[n-1]))
        {
            a[i] /= 2;
            m--;
            i--;
        }
        sort(a.begin(),a.end());
    }
    cout<<accumulate(a.begin(),a.end(),0);
    return 0;
}