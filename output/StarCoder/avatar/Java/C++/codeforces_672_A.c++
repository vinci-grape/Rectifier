#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="1";
    for(int i=1;i<1000;i++)
    {
        s+=to_string(i);
    }
    cout<<s[n-1];
}