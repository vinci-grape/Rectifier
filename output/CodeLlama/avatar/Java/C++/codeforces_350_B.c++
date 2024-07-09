#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1],num[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        num[b[i]]++;
    }
    string ss;
    int ans=0;
    bool st[n+1];
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            st[i]=true;
            string sss;
            int x=b[i];
            stringstream ss;
            ss<<i;
            sss=ss.str();
            reverse(sss.begin(),sss.end());
            int s=1;
            while(!st[x] && num[x]==1 && x!=0 && a[x]!=1)
            {
                stringstream ss;
                ss<<x;
                sss=ss.str();
                reverse(sss.begin(),sss.end());
                st[x]=true;
                x=b[x];
                s++;
            }
            if(s>ans)
            {
                ans=s;
                ss=sss;
            }
        }
    }
    cout<<ans<<endl;
    cout<<ss<<endl;
    return 0;
}