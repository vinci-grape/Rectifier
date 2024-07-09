#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,j,k,n=0,m=0,h=0,w=0,ans=0;
    long a=0,b=0,c=0,d=0,x=0,y=0,z=0;
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