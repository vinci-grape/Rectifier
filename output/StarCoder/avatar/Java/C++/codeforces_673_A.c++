#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result,pos=0,flag=0;
    if(a[0]>15)
    {
        result=15;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>15)
            {
                pos=i-1;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            result=a[pos]+15;
        }
        else
        {
            result=a[n-1]+15;
        }
    }
    if(result>90)
    {
        result=90;
    }
    cout<<result<<endl;
}