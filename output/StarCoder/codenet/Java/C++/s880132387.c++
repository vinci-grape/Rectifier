#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int W,H;
	while(cin>>W>>H){
		if(W==0 && H==0)break;
		char map[H][W];
		for(int h=0;h<H;h++){
			for(int w=0;w<W;w++){
				cin>>map[h][w];
			}
		}
		int dp[H][W];
		for(int h=0;h<H;h++)for(int w=0;w<W;w++){
			int hprev=0;
			if(h>=1){
				hprev=dp[h-1][w];
			}
			int wprev=0;
			if(w>=1){
				wprev=dp[h][w-1];
			}
			if(isdigit(map[h][w])){
				int max;
				if(hprev>wprev){
					max=hprev;
				}else{
					max=wprev;
				}
				dp[h][w]=max*10+map[h][w]-'0';
			}else{
				dp[h][w]=0;
			}
		}
		int max=0;
		for(int h=0;h<H;h++)for(int w=0;w<W;w++){
			if(dp[h][w]>max)max=dp[h][w];
		}
		cout<<max<<endl;
	}
	return 0;
}