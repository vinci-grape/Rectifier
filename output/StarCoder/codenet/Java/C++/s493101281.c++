#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j,k,ans=0;
    long long a,b,c,d,x,y,z;
    vector<int> l;
    vector<string> s;
    vector<pair<int,int>> p;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>a;
        l.push_back(a);
    }

    sort(l.begin(),l.end());

    cout<<l[n/2]-l[n/2-1];

    return 0;
}