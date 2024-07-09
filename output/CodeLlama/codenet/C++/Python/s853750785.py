# AtCoder.py : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
#

# AtCoder.py : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
#


import math

#import cmath

import deque
import queue
import vector
import algorithm
import iostream
import set
import cmath
import tuple
import string
import chrono
import functional
import iterator
import random
import unordered_set
import array
import map
import iomanip
import assert
import bitset
import stack
import memory



#import "Ants.h"
using namespace std;
typedef long long ll;
#define rad_to_deg(rad) (((rad)/2/M_PI)*360)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i,n) for(int i=0;i<n;i++)
#define show(s) cout<<s<<endl
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
#define LINF (1000000000000000000ll)
#define MOD (1e9+7)
#define rep1(i,n) for(int i =1;i<=n;i++)
typedef pair < ll, ll> P;
ll gcd(ll a, ll b) {//最大公約数を求める///最大公倍数a*b/gcd(a,b)
	if (b == 0) return a;
	return gcd(b, a % b);
}
ll lcd(ll a, ll b) {//最小公倍数を求める　b=0のときaを返す
	if (b == 0) return a;
	return (a / gcd(a, b)) * b;
}
vector<int> divnum(ll num) {
	int dig;
	vector<int>p;
	while (num) {
		dig = num % 10;
		p.push_back(dig);
		num /= 10;
	}
	return p;
}
int digiter(ll num) {
	int dig;
	vector<int>p;
	while (num) {
		dig = num % 10;
		p.push_back(dig);
		num /= 10;
	}
	return p.size();
}
vector<int> convertstring(string s) {
	vector<int> d;
	ll n = s.size();
	rep(i, n) {
		d.push_back(s[i] - '0');
	}
	return d;
}
map< ll, int > prime_factor(ll n) {
	map< ll, int > ret;
	for (ll i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			ret[i]++;
			n /= i;
		}
	}
	if (n != 1) ret[n] = 1;
	return ret;
}
vector<ll> divisor(ll n) {
	vector<ll>res;
	for (ll i = 1; i * i <= n; i++) {
		if (n % i != 0)continue;
		res.push_back(i);
		if (i * i != n)res.push_back(n / i);
	}
	return res;
}


ll myPow(ll x, ll n, ll m) {//x^n
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return myPow(x * x % m, n / 2, m);
	else
		return x * myPow(x, n - 1, m) % m;
}
std::vector<int> Eratosthenes(const int N)//素数列挙
{
	std::vector<bool> is_prime(N + 1);
	for