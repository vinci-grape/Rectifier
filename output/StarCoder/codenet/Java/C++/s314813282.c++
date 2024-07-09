#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m,n,x,y;
    cin>>m>>n>>x>>y;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int x_max=*max_element(a,a+m);
    int y_min=*min_element(b,b+n);
    if(x_max>=y_min)
    {
        cout<<"War";
    }
    else
    {
        cout<<"No War";
    }
    return 0;
}