#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <sstream>
#include <cstdint>
#include <iterator>
#include <cassert>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

const int N = 1e5 + 5;
const int M = 1e5 + 5;

int n,m;
int a[N];
int dp[M][N];

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j-a[i]>=0){
                dp[j][i]=dp[j-a[i]][i];
            }
            if(j+a[i]<m){
                dp[j][i]=max(dp[j][i],dp[j+a[i]][i]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,dp[m-1][i]);
    }
    printf("%d\n",ans);
}