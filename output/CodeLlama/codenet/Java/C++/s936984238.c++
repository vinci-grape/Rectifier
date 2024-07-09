#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int sum=0;
        for(int i=1;i<n-1;i++)
            sum+=a[i];
        cout<<sum/(n-2)<<endl;
    }
    return 0;
}