#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,levels,sum=0,sum2=0,sum3=0,arr[levels],count=0,level2,level3,arr2[level3];
    cin>>n>>levels;
    for(int i=0;i<levels;i++)
    {
        cin>>arr[i];
    }
    level2=sc.nextInt();
    level3=levels+level2;
    for(int i=0;i<arr.length;i++)
    {
        arr2[i]=arr[i];
    }
    for(int i=arr.length;i<level3;i++)
    {
        arr2[i]=sc.nextInt();
    }
    int arr3[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        arr3[i]=++j;
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<arr2.length;x++)
        {
            if(arr3[i]==arr2[x])
            {
                count++;
                break;
            }
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
}