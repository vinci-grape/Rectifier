#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int flag=0;
    string d1[n];
    string d2[n];
    set<char> rem;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                d1[i]=s[i][j];
            }
            if(i==n-j-1)
            {
                d2[i]=s[i][j];
            }
            if(i!=j and i!=n-j-1)
            {
                rem.insert(s[i][j]);
            }
        }
    }
    if(rem.size()!=1)
    {
        cout<<"NO"<<endl;
    }
    else if(d1!=d2)
    {
        cout<<"NO"<<endl;
    }
    else if(d1[0]==rem.begin())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}