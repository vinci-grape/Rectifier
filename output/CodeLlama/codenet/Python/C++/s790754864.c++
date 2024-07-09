#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll fact(ll n, ll r){
    return (n == 0) ? 1 : (n * fact(n - 1, r)) % mod;
}

int main(){
    ll N, K;
    cin >> N >> K;
    ll R = N - K;
    for(ll i = 1; i <= K; i++){
        if(N - K + 1 < i){
            cout << 0 << endl;
        }
        else{
            cout << fact(R + 1, i) * fact(K - 1, i - 1) % mod << endl;
        }
    }
    return 0;
}