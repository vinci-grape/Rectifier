#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length()==2)
    {
        cout<<s;
    }
    else
    {
        cout<<s.substr(s.length()-2,2);
    }
    return 0;
}