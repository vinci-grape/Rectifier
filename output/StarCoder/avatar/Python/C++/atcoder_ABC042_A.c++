#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==5 && b==5)
    {
        if(c==10)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else if(a==5 || b==5)
    {
        if(c==10)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else if(c==10)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}