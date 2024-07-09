#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

long long f(int n) {
    long long res = 1;
    for(int i = 2; i<=n; i++) res = (res*i)%MOD;
    return res;
}

int main() {
    int x, y;
    cin >> x >> y;
    int min = min(x, y);
    int max = max(x, y);
    long long res;
    if(min == max) {
        long long f = f(min);
        res = (2*f*f)%MOD;
    } else if(min + 1 == max){
        long long f = f(min);
        res = (f*((f*max)%MOD))%MOD;
    } else {
        res = 0;
    }
    cout << res << endl;
    return 0;
}