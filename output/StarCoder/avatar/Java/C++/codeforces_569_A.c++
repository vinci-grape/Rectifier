#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,q,a,b;
    cin>>t>>s>>q;
    a=s;
    while(a<t)
    {
        a*=q;
        b++;
    }
    cout<<b;
    return 0;
}