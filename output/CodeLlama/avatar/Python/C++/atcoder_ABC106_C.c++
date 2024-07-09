#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast;
    string s;
    cin>>s;
    int k;
    cin>>k;
    int l=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='1')
        {
            break;
        }
        l++;
    }
    if(l>=k)
    {
        cout<<1;
    }
    else
    {
        cout<<s[l];
    }
    return 0;
}