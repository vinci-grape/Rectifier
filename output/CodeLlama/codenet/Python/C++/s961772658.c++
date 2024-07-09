#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char alphabets[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i=0;i<26;i++)
    {
        if(alphabets[i]==s)
        {
            cout<<alphabets[i+1];
        }
    }
    return 0;
}