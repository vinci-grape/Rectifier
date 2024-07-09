#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    long long pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>pre[i];
        pre[i]+=pre[i-1];
    }
    long long min=LLONG_MAX;
    for(int i=1;i<n;i++)
    {
        long long val1=pre[i],val2=pre[n]-pre[i];
        min=min(min,abs(val1-val2));
    }
    cout<<min<<endl;
    return 0;
}