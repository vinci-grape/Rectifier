#include <iostream>
using namespace std;
int main()
{
    int n,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        d+=a%2;
    }
    cout<<(d%2==0?"YES":"NO");
    return 0;
}