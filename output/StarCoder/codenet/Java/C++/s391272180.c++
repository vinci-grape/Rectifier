#include <iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int len=s.length();
    for(int i=0;i<len;i++) {
        string temp=s;
        s=temp.substr(1,len-1)+temp.at(0);
        if(s==t) {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}