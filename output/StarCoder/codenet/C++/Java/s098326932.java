#include<iostream>
#include<iomanip>
#include<cstdio>

#include<vector>
#include<queue>
#include<set>
#include<map>
#include<string>

#include<algorithm>
#include<cmath>
#include<numeric>

using namespace std;
typedef long long ll;
template <class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template <class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}
const ll INF = 1e18+1;


/*
1 <= S(n) <= 9 * (floor(log10 n) + 1)

したがって n / (9 * (floor(log10 n) + 1)) <= n/S(n) <= n

この達成される下界の内、floorの性質からその候補はちょうど10, 100, 1000...に限られる
10 ^ kのとき下界は
10^k/(9*(k+1))

11/2


その桁で一番小さいのは 19...9/S(19...9)
各桁について 99...9/S()以下なら出力?

各桁において
最もn/S(n)が小さいnは何か

n自体の差は最大10倍

1...19...9の形が可能性


editorial
つまり...
一つ目のポイント
「N以上の整数nでn/S(n)を最小にするもの」を求める
関数を作ってN <- f(N+1)を繰り返せばよい

二つ目
Nに対して、それ以上で最小にしえる候補は、
Nの下位数桁を9に置き換えたものとする
そのうち最小にするものを実際に比較する

*/

ll f(ll N) {
    vector<ll> a(20,0);
    ll d = 0;
    while (N > 0) {
        a[d] = N % 10;
        N /= 10;
        d++;
    }
    double m = 1e18;
    ll res = N;
    for (int i = 0; i <= d; i++) {
        ll bunsi = 0;
        ll bunbo = 9 * i;
        for (int j = d-1; j >= 0; j--) {
            bunsi *= 10;
            if (j < i) bunsi += 9;
            else bunsi += a[j];
            
            if (j >= i) bunbo += a[j];
            
        }
        //cout << "bb" << bunsi <<  " " << bunbo << "  " << endl;
        double frac = (double) bunsi / (double) bunbo;
        if (frac < m) {
            m = frac;
            res = bunsi;
        }
    }
    return res;
}

int main() {
    ll K;
    cin >> K;
    ll N = f(1);
    for (ll i = 0; i < K; i++) {
        cout << N << endl;
        N = f(N+1);
    }
    

}