#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
long long f(int n) {
    long long res = 1;
    for(int i = 2; i<=n; i++) res = (res*i)%MOD;
    return res;
}
int main() {
    int xx[2];
    cin >> xx[0] >> xx[1];
    int minVal = min(xx[0], xx[1]);
    int maxVal = max(xx[0], xx[1]);
    long long res;
    if(minVal == maxVal) {
        long long fVal = f(minVal);
        res = (2*fVal*fVal)%MOD;
    } else if(minVal + 1 == maxVal){
        long long fVal = f(minVal);
        res = (fVal*((fVal*maxVal)%MOD))%MOD;
    } else {
        res = 0;
    }
    cout << res << endl;
}