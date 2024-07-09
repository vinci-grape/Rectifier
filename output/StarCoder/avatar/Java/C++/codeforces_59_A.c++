#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int upper=0,lower=0;
    for(int i=0;i<word.length();i++)
    {
        if(isupper(word[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if(upper>lower)
    {
        cout<<word.upper();
    }
    else if(lower>upper)
    {
        cout<<word.lower();
    }
    else
    {
        cout<<word.lower();
    }
    return 0;
}