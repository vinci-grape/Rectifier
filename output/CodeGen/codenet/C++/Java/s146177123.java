#include<iostream>
#include<sstream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<numeric>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>

#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define mp make_pair
#define pb push_back
#define rp(i,c) rep(i,(c).size())
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int inf=1<<28;
const double INF=1e12,EPS=1e-9;

bool seg[][7]={
	{0,1,1,1,1,1,1},
	{0,0,0,0,1,1,0},
	{1,0,1,1,0,1,1},
	{1,0,0,1,1,1,1},
	{1,1,0,0,1,1,0},
	
	{1,1,0,1,1,0,1},
	{1,1,1,1,1,0,1},
	{0,1,0,0,1,1,1},
	{1,1,1,1,1,1,1},
	{1,1,0,1,1,1,1}
};

int main()
{
	int n,t; bool st[7];
	while(cin>>n,~n){
		rep(i,7)st[i]=0;
		rep(i,n){
			cin>>t;
			char ans[8]={0};
			rep(i,7){
				ans[i]=st[i]^seg[t][i]?'1':'0';
				st[i]=seg[t][i];
			}
			cout<<ans<<endl;
		}
	}
	
	return 0;
}