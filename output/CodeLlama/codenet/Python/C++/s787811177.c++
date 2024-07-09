#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> ls(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>ls[i][j];
        }
    }
    sort(ls.begin(),ls.end(),[](vector<int> a,vector<int> b){
        return a[0]+a[1]>b[0]+b[1];
    });
    int taka=0,aoki=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            taka+=ls[i][0];
        }
        else
        {
            aoki+=ls[i][1];
        }
    }
    cout<<taka-aoki;
    return 0;
}