#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    vector<vector<char>> l(h,vector<char>(w));
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cin>>l[i][j];
        }
    }
    int tmp=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(l[i][j]=='#')
            {
                if(j<tmp)
                {
                    cout<<"Impossible";
                    return 0;
                }
                else
                {
                    tmp=j;
                }
            }
        }
    }
    cout<<"Possible";
    return 0;
}