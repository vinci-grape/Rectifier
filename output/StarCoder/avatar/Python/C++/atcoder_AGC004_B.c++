#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-j<0)
                b[i][j]=a[i-j+n];
            else
                b[i][j]=a[i-j];
        }
    }
    int m=1000000000;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
            sum+=b[j][i];
        m=min(m,sum+x*i);
    }
    cout<<m;
}