#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<("No\nYes\n")[s.find(s.substr(0,s.size()/2))!=-1];
    return 0;
}