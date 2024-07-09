#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,at,b,bt,t1,t2,st,fin,now,ans;
    cin>>a>>at>>b>>bt;
    t1=t2=st=fin=now=ans=0;
    cin>>t1>>t2;
    st=t2+(t1-5)*60;
    fin=st+at;
    while(now<fin && now<1140)
    {
        if(now+bt>st)
            ans++;
        now+=b;
    }
    cout<<ans;
    return 0;
}