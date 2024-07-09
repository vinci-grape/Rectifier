#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,h,s,d,n;
    cin>>q>>h>>s>>d>>n;
    int best1L=min(q*4,h*2,s);
    int best2L=min(d,best1L*2);
    if(n%2==0)
        cout<<best2L*(n/2);
    else
        cout<<best2L*(n/2)+best1L;
    return 0;
}