#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <set>
#include <bitset>
#include <deque>
#include <sstream>
#include <numeric>
#include <functional>
#include <utility>
#include <cassert>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define for1(i,a,n) for(int i=(a);i<=(n);++i)
#define for2(i,a,n) for(int i=(a);i<(n);++i)
#define for3(i,a,n) for(int i=(a);i>=(n);--i)
#define for4(i,a,n) for(int i=(a);i>(n);--i)
#define CC(i,a) memset(i,a,sizeof(i))
#define read(a) a=getint()
#define print(a) printf("%d", a)
#define dbg(x) cout << #x << " = " << x << endl
#define printarr(a, n, m) rep(aaa, n) { rep(bbb, m) cout << a[aaa][bbb]; cout << endl; }
inline const int getint() { int r=0, k=1; char c=getchar(); for(; c<'0'||c>'9'; c=getchar()) if(c=='-') k=-1; for(; c>='0'&&c<='9'; c=getchar()) r=r*10+c-'0'; return k*r; }
inline const int max(const int &a, const int &b) { return a>b?a:b; }
inline const int min(const int &a, const int &b) { return a<b?a:b; }

const int N=1005;
int a[N][N], n, m;
int dp[N][N];
int main() {
	read(n); read(m);
	for1(i, 1, n) for1(j, 1, m) read(a[i][j]);
	for1(i, 1, n) {
		for1(j, 1, m) {
			if(a[i][j]==0) dp[i][j]=0;
			else if(i==1 && j==1) dp[i][j]=1;
			else if(i==1) dp[i][j]=dp[i-1][j]+1;
			else if(j==1) dp[i][j]=dp[i][j-1]+1;
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	int ans=0;
	for1(i, 1, n) {
		for1(j, 1, m) {
			if(a[i][j]==0) continue;
			if(i==1 && j==1) continue;
			if(i==1) ans+=dp[i-1][j];
			if(j==1) ans+=dp[i][j-1];
			if(i==n && j==m) ans+=dp[i][j];
		}
	}
	print(ans);
	return 0;
}