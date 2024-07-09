#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int vec[n][4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>vec[i][j];
        }
    }
    int ans=500;
    int ansprice=20000;
    for(int i=0;i<n;i++)
    {
        int fl=1;
        for(int j=0;j<n;j++)
        {
            if(vec[i][0]<vec[j][0]&&vec[i][1]<vec[j][1]&&vec[i][2]<vec[j][2])
            {
                fl=0;
            }
        }
        if(fl==1)
        {
            if(vec[i][3]<ansprice)
            {
                ansprice=vec[i][3];
                ans=i+1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}