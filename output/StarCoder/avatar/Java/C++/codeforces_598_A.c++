#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int s=0;
        int x=(int)(log(n)/log(2));
        x++;
        s=-1*(long long int)pow(2,x)+2+(long long int)n*(long long int)(n+1)/2-(long long int)pow(2,x);
        cout<<s<<endl;
    }
}