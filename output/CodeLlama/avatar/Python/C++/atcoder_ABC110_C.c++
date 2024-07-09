#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    map<char,int> mp1,mp2;
    for(int i=0;i<s.length();i++)
    {
        mp1[s[i]]++;
    }
    for(int i=0;i<t.length();i++)
    {
        mp2[t[i]]++;
    }
    if(mp1==mp2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}