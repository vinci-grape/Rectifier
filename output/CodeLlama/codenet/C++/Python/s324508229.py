#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
#define PB push_back
#define MP make_pair
#define REP(i,n) for(int i=0;i<(n);i++)
int main(){
    int n,ii,a,b;
    cin>>n;
    long long cnt[10][10];
    REP(i,100)cnt[i%10][i/10]=0;
    for(int i=1;i<=n;i++){
        b=i%10;
        a=i;
        while(a>=10){
            a/=10;
        }
        cnt[a][b]++;
    }
    long long ans=0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            // cout<<i<<" "<<j<<" "<<cnt[i][j]<<" "<<cnt[j][i]<<endl;
            ans+=cnt[i][j]*cnt[j][i];
        }
    }
    cout<<ans<<endl;
}