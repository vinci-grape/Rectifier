#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()<26)
    {
        for(int i=0;i<26;i++)
        {
            char c=i+'a';
            if(c not in s)
            {
                cout<<s+c<<endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i=25;i>=0;i--)
        {
            if(s[i]<s[i+1])
            {
                string s1=s[0:i];
                for(int j=0;j<26;j++)
                {
                    char c=j+'a';
                    if(c>s[i] and c not in s1)
                    {
                        cout<<s1+c<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<-1<<endl;
    }
}