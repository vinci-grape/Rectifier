#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
ll f(ll n){
    ll res = 1;
    for(ll i = 2; i <= n; i++)
        res = (res * i) % MOD;
    return res;
}
int main(){
    ll n, m;
    cin >> n >> m;
    cout << max(2 - m + n, 0) * f(n) * f(m) % MOD << endl;
    return 0;
}