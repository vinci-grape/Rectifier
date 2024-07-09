#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.length()<26)
    {
        for(int i=0;i<26;i++)
        {
            char c=char(i+'a');
            if(s.find(c)==string::npos)
            {
                cout<<s<<c<<endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i=1;i<26;i++)
        {
            if(s[i-1]<s[i])
            {
                string s1=s.substr(0,i-1);
                for(int j=0;j<26;j++)
                {
                    char c=char(j+'a');
                    if(c>s[i-1] && s1.find(c)==string::npos)
                    {
                        cout<<s1<<c<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<-1<<endl;
    }
    return 0;
}