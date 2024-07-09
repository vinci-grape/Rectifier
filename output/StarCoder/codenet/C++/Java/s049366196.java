#define _GLIBCXX_DEBUG
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <map>
using namespace std;
typedef long long ll;
#define ALL(v) (v).begin(), (v).end()
const int inf = 1e9;
const int mod = 1e9+7;

boolean is_prime(ll x) {
	for (ll i = 2; i*i <= x; i++)
		if (x % i == 0) return false;
	return true;
}

int main() {
	int N;
	cin >> N;

	ll ans = 1;
	for (int i = 2; i <= N; i++) {
		if (is_prime((ll)i)) {
			int NN = N;
			int cnt = 0;
			while (NN) {
				cnt += NN/i;
				NN /= i;
			}
			ans *= cnt+1;
			ans %= mod;
		}
	}

	cout << ans << endl;
    return 0;
}