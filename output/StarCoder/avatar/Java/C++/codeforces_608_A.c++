#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,s,max=0;
    cin>>n>>s;
    while(n--)
    {
        int f,t;
        cin>>f>>t;
        if(max<f+t)
        {
            max=f+t;
        }
    }
    cout<<max;
    return 0;
}