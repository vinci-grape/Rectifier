#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define MAX 1000005

int main(){
    int t;
    sc("%d",&t);
    while(t--){
        int n,m,a,b;
        sc("%d%d%d%d",&n,&m,&a,&b);
        int FfriendPerDay[MAX],MfriendPerDay[MAX];
        for(int i=0;i<n;i++)
            sc("%d",&FfriendPerDay[i]);
        for(int i=0;i<m;i++)
            sc("%d",&MfriendPerDay[i]);
        int ans=0;
        for(int i=a;i<=b;i++)
            if(MfriendPerDay[i]<FfriendPerDay[i])
                ans=max(ans,MfriendPerDay[i]);
            else
                ans=max(ans,FfriendPerDay[i]);
        pf("%d\n",ans*2);
    }
    return 0;
}