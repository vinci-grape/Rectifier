#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=0;
        }
        int s=-1,tem=1,q=0;
        while(q!=n)
        {
            s++;
            if(tem==1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]<=q && b[i]==0)
                    {
                        b[i]=1;
                        q++;
                    }
                }
                tem=0;
            }
            else
            {
                for(int i=n-1;i>=0;i--)
                {
                    if(a[i]<=q && b[i]==0)
                    {
                        b[i]=1;
                        q++;
                    }
                }
                tem=1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}