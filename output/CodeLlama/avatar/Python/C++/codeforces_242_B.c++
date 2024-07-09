#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,id=0,l,r;
    cin>>n;
    cin>>l>>r;
    for(int i=1;i<n;i++)
    {
        int li,ri;
        cin>>li>>ri;
        if(li<=l && r<=ri)
            id=i;
        else if(li<l || r<ri)
            id=n;
        l=min(l,li);
        r=max(r,ri);
    }
    if(id==n)
        cout<<-1;
    else
        cout<<id+1;
    return 0;
}