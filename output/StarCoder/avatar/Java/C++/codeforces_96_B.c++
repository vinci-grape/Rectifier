#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int number,ans,value,mask;
    cin>>number;
    ans=-1;
    value=0;
    mask=2;
    while(value<number)
    {
        string s=bitset<64>(mask++).to_string();
        int zeros=0;
        for(char c:s)
            if(c=='0')
                zeros++;
        if(zeros!=s.length()-zeros)
            continue;
        s=s.replace('0','4');
        s=s.replace('1','7');
        value=stoll(s);
    }
    cout<<value;
}