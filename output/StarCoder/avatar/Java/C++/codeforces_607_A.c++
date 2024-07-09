#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int beacon[1000001];
    int dp[1000001];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        beacon[a]=b;
    }
    if(beacon[0]!=0)
    dp[0]=1;
    for(int i=1;i<1000001;i++)
    {
        if(beacon[i]!=0 && beacon[i]<i)
        {
            dp[i]=dp[i-beacon[i]-1]+1;
        }
        else if(beacon[i]!=0)
        {
            dp[i]=1;
        }
        else
        {
            dp[i]=dp[i-1];
        }
    }
    cout<<n-dp[1000000];
}