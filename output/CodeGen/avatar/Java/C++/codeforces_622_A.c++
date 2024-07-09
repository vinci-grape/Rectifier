#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <ctime>
#include <cctype>
using namespace std;

typedef long long i64;
typedef unsigned long long u64;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

#define FOR0(i, n) for(int i = 0; i < n; i++)
#define FOR1(i, n) for(int i = 1; i <= n; i++)
#define FORR(i, a, b) for(int i = a; i <= b; i++)
#define FORC(i, a, b) for(int i = a; i >= b; i--)
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPC(i, n) for(int i = n-1; i >= 0; i--)
#define VAR(v, i) __typeof(v.begin()) i = v.begin();
#define FORE(i, c) for(__typeof((c).begin()) i = (c).begin(); i!= (c).end(); i++)
#define MP make_pair
#define X first
#define Y second
#define PB push_back
#define all(c) (c).begin(), (c).end()
#define SZ size()
#define MAXN 1000005
#define EPS 1e-9
#define INF 1000000006
#define MOD 1000000007
#define PI acos(-1.0)
#define MAX 100000000

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[m];
	FOR0(i,n){
		scanf("%d",&a[i]);
	}
	FOR0(i,m){
		scanf("%d",&b[i]);
	}
	int cnt=0;
	FOR0(i,n){
		FOR0(j,m){
			if(a[i]==b[j]){
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}