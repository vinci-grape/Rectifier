#include <bits/stdc++.h>
using namespace std;

const int mod = (int) 1e9 + 7;

int N;
vector<vector<int>> to;
int dp[100001];

int rec(int v, int parent) {
	int res = 1;
	for(int next:to[v]) {
		if(next == parent) continue;
		res += rec(next, v);
	}
	return dp[v] = res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	to = vector<vector<int>>(N);
	for(int i=0;i<N;i++) to[i] = vector<int>();
	int edges[100001][2]; //どちらが子になるかdfsするまでわからないので両方持っておく
	for(int i=0;i<N-1;i++) {
		int A, B;
		cin >> A >> B;
		to[A-1].push_back(B-1);
		to[B-1].push_back(A-1);
		edges[i][0] = B-1;
		edges[i][1] = A-1;
	}
	rec(0, -1);
	long mulsum = 0;
	for(int e[2]:edges) {
		//子の配下の頂点数を知りたいので、どちらが子頂点か調べる
		int candidate1 = e[0];
		int candidate2 = e[1];
		int child = candidate1;
		if(dp[candidate1]>dp[candidate2])child = candidate2;
		
		long a = dp[child];
		long b = N - a;

		//mulは、全ケース(2^n通り)における、この辺が部分木Sに含まれる回数		
		//この辺を境にしてできる部分木2つについてそれぞれ、1つ以上黒を含む確率を求めて、掛け合わせた物に
		//2^nをかけて場合の数にした
		long mul = (modpow(2, a) - 1)*(modpow(2, b) - 1)%mod;			
		mulsum += mul;
		mulsum %= mod;
	}
	long cases = modpow(2, N);
	//PN:全ケースにおける、部分木Sに含まれる頂点数の総和
	//頂点の数は、辺の数＋１であり、辺の数が�