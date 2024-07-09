#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,a,b,j,i,x1,y1,c;
    bool ans;
    cin>>x>>y>>a>>b;
    j=2;
    ans=true;
    c=max(x,y);
    if(c>b)
    {
        cout<<"0";
        ans=false;
    }
    while(c%min(x,y)!=0 && ans)
    {
        if(x>y)
        {
            c=x*j;
            j++;
        }
        else
        {
            c=y*j;
            j++;
        }
        if(c>b)
        {
            cout<<"0";
            ans=false;
            break;
        }
    }
    if(ans)
    {
        long long int count=0;
        i=a;
        for(i=a;i<=b;i++)
        {
            if(i%c==0)
                break;
        }
        if(i!=b+1)
            cout<<((b-i)/c)+1;
        else
            cout<<"0";
    }
}