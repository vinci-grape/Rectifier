#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;
vector<vector<int>> to;
vector<int> dp;

int rec(int v, int parent) {
	int res = 1;
	for(int next:to[v]) {
		if(next == parent) continue;
		res += rec(next, v);
	}
	return dp[v] = res;
}

long long modpow(long long x, long long y) {
	if(y==0) return 1;
	if(y%2!=0) return x * modpow(x, y-1) % mod;
	long long tmp = modpow(x, y/2);
	return tmp * tmp % mod; 
}

int main() {
	int N;
	cin >> N;
	to.resize(N);
	for(int i=0;i<N;i++) to[i].clear();
	vector<vector<int>> edges(N-1, vector<int>(2));
	for(int i=0;i<N-1;i++) {
		int A, B;
		cin >> A >> B;
		A--; B--;
		to[A].push_back(B);
		to[B].push_back(A);
		edges[i][0] = B;
		edges[i][1] = A;
	}
	dp.resize(N);
	rec(0, -1);
	long long mulsum = 0;
	for(auto e:edges) {
		int candidate1 = e[0];
		int candidate2 = e[1];
		int child = candidate1;
		if(dp[candidate1]>dp[candidate2]) child = candidate2;
		long long a = dp[child];
		long long b = N - a;
		long long mul = (modpow(2, a) - 1)*(modpow(2, b) - 1)%mod;			
		mulsum += mul;
		mulsum %= mod;
	}
	long long cases = modpow(2, N);
	long long PN = (mulsum + (cases - 1 + mod)%mod)%mod;
	long long BN = N * modpow(2, N-1) %mod;
	long long WN = (PN - BN + mod)%mod;
	long long ans = WN * modpow(cases, mod-2);
	ans %= mod;
	cout << ans << endl;
	return 0;
}