#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int total=0,numA=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='X')
        {
            numA=0;
        }
        else
        {
            if(s[i]=='A')
            {
                numA++;
            }
            else
            {
                total+=numA;
            }
        }
    }
    cout<<total<<endl;
    return 0;
}