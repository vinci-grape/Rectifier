#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,i,j,k,q[100000],arr[100000];
    scanf("%d",&n);
    arr[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=arr[i]+arr[i-1];
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&q[i]);
    }
    for(k=0;k<m;k++)
    {
        i=0;j=n;
        while(i<=j)
        {
            int md=(i+j)/2;
            if(arr[md]==q[k])
            {
                printf("%d\n",md);
                break;
            }
            else if(arr[md]>q[k])
            {
                j=md-1;
            }
            else
            {
                i=md+1;
            }
        }
        if(i>j)
        {
            printf("%d\n",j);
        }
    }
    return 0;
}