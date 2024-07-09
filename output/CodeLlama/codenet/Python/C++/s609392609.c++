#include <iostream>
using namespace std;
int main()
{
    int n,m,p,x,s;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>p>>x;
        s=0;
        for(int j=0;j<n;j++)
        {
            if(j==p-1)
            {
                s+=x;
            }
            else
            {
                s+=t[j];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}