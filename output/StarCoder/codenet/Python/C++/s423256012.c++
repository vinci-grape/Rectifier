#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if((a+b)%2==1)
    {
        cout<<"IMPOSSIBLE";
    }
    else
    {
        cout<<((a+b)/2);
    }
}