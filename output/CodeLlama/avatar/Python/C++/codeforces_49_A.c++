#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    char vo[]={'a','e','i','o','u','y','A','E','I','O','U','Y'};
    for(int i=strlen(a)-1;i>=0;i--)
    {
        if(a[i]==' '||a[i]=='?')
            continue;
        else
        {
            for(int j=0;j<12;j++)
            {
                if(a[i]==vo[j])
                {
                    cout<<"YES";
                    break;
                }
            }
            break;
        }
    }
    return 0;
}