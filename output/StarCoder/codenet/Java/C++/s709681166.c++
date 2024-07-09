#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(isupper(c))
        {
            c+=32;
            cout<<c;
        }
        else if(islower(c))
        {
            c-=32;
            cout<<c;
        }
        else
            cout<<c;
    }
    cout<<endl;
    return 0;
}