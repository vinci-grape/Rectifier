#include <bits/stdc++.h>
using namespace std;
int ans = 100;
int N;
int balls[100000][2];
bool taken[100000];
void solve() {
	for (int add = 1; add<N; add++) {
		memset(taken,false,sizeof(taken));
		int p = balls[add][0]-balls[0][0];
		int q = balls[add][1]-balls[0][1]; //Differences
		ans=min(ans,check(p,q));
	}
}
int check(int p, int q) {
	int ret = 0;
	while (true) {
		bool added=false;
		int start = 0;
		int x = -1;
		int y = -1; //Coordinates that we want next
		for (int i = 0; i < N; i++) {
			if (!taken[i]) {
				added=true;
				ret++;
				start=i;
				taken[i]=true;
				x=balls[i][0]+p;
				y=balls[i][1]+q;
				break;
			}
		}
		if (!added) break;
		for (int i = start+1; i < N; i++) {
			if (balls[i][0]==x&&balls[i][1]==y) {
				taken[i]=true;
				x+=p;
				y+=q;
			}
		} 
	}
	return ret;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>N;
	ans=N;
	for (int i = 0; i < N; i++) {
		cin>>balls[i][0];
		cin>>balls[i][1];
	}
	sort(balls,balls+N,[](int a[],int b[]){return a[0]<b[0];});
	solve();
	for (int i = 0; i < N; i++) {
		int x = balls[i][0];
		int y = balls[i][1];
		balls[i][0]=y;
		balls[i][1]=x;
	}
	sort(balls,balls+N,[](int a[],int b[]){return a[0]<b[0];});
	solve();
	cout<<ans<<endl;
	return 0;
}