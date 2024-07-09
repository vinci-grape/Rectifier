#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int ans = 1000000;
    for(int i=0;i<s.length();i++)
    {
        string a = s.substr(i,s.length()-i);
        if(a.length()>=t.length())
        {
            int s = 0;
            for(int j=0;j<t.length();j++)
            {
                if(a[j]!=t[j])
                    s++;
            }
            ans = min(ans,s);
        }
    }
    cout<<ans<<endl;
    return 0;
}