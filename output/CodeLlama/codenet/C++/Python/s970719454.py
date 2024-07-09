#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int here[100001];
int dp1[100001];
int dp2[100001];

int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0)break;
		
		rep(i,100001)here[i]=dp1[i]=dp2[i]=0;
		
		bool dpflg = false;
		
		rep(i,m){
			int a;
			cin>>a;
			if(a==0) dpflg=true;
			
			here[a]=1;
		}
		
		int maxi1 = 0;
		int maxi2 = 0;
		
		reps(i,1,n+1){
			if(here[i]==1)dp1[i] = dp1[i-1]+1;
			maxi1 = max(dp1[i], maxi1);
		}
		
		reps(i,1,n+1){
			if(here[i]==1)dp2[i] = dp2[i-1]+1;
			else dp2[i] = dp1[i-1]+1;
			maxi2 = max(dp2[i], maxi2);
		}
		
		if(!dpflg){
			printf("%d\n",maxi1);
		}else{
			printf("%d\n",maxi2);
		}
	}
}