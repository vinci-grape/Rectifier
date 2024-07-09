#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cin >> b[i];
    sort(b,b+n);
    for(int i=0;i<n;i++)
        cin >> c[i];
    sort(c,c+n);
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i]+b[i]+c[i];
    if(sum==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}