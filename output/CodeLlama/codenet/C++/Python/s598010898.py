#include <iostream>
#include<algorithm>
#include<sstream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<map>
#include<set>
#include<queue>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i = 0; i < n;i++)
int main(void) {
	int n, a[100], b[100], sum = 0;cin >> n;
	rep(i, n) cin >> a[i];
	rep(i, n) {
		cin >> b[i];
		if (a[i] - b[i] > 0) {
			sum += a[i] - b[i];
		}
	}
	cout << sum << endl;
}