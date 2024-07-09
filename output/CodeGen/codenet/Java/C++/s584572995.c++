#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <cmath>
#define pi 3.14159
#define mod 1000000007
using namespace std;

int main() {
	int N;
	cin >> N;
	int edges[][2] = new int[N-1][2];
	for(int i=0;i<N-1;i++) {
		int A, B;
		cin >> A >> B;
		edges[i][0] = A;
		edges[i][1] = B;
	}
	int dp[N];
	for(int i=0;i<N;i++) dp[i] = 0;
	rec(0, -1);
	long mulsum = 0;
	for(int e[]:edges) {
		//子の配下の頂点数を知りたいので、どちらが子頂点か調べる
		int candidate1 = e[0];
		int candidate2 = e