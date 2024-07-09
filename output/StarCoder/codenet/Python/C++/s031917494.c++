#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    if(n>25)
    {
        cout<<s.substr(0,n-25);
    }
    else
    {
        cout<<s.substr(0,n);
    }
    return 0;
}