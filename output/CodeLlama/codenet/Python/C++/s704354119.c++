#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,max=-1e9,min=1e9;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        sum+=s[i]-'0';
        if(max<s[i]-'0')
            max=s[i]-'0';
        if(min>s[i]-'0')
            min=s[i]-'0';
    }
    cout<<min<<" "<<max<<" "<<sum;
    return 0;
}