#include <iostream>
#include <vector>
#define MOD 1000000007
#define Nsq 1000
#define M 1000000
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    vector<vector<long long>> fact(Nsq, vector<long long>(Nsq));
    fact[0][0] = 1;
    for(int n=1; n<Nsq; n++) {
        for(int i=0; i<Nsq; i++) {
            fact[i][n] = fact[i][n-1];
            fact[i][n] %= MOD;
        }
        for(int i=0; i<Nsq; i++) {
            fact[i][n] *= fact[i-1][n];
            fact[i][n] %= MOD;
        }
    }
    for(int n=1; n<Nsq; n++) {
        for(int i=0; i<Nsq; i++) {
            fact[n][i] *= fact[n-1][Nsq-1];
            fact[n][i] %= MOD;
        }
    }
    vector<long long> j(N);
    for(int i=0; i<N; i++) {
        j[i] = i;
    }
    vector<long long> inv(N);
    for(int i=0; i<N; i++) {
        inv[i] = 1;
        for(int j=1; j<=MOD-2; j++) {
            inv[i] *= (i+1);
            inv[i] %= MOD;
        }
    }
    vector<long long> cum_inv(N);
    cum_inv[0] = inv[0];
    for(int i=1; i<N; i++) {
        cum_inv[i] = cum_inv[i-1] + inv[i];
        cum_inv[i] %= MOD;
    }
    vector<long long> temp(N);
    for(int i=0; i<N; i++) {
        temp[i] = cum_inv[i] + cum_inv[N-1-i] - 1;
        temp[i] %= MOD;
    }
    long long ans = 0;
    for(int i=0; i<N; i++) {
        ans += (A[i] * temp[i]) % MOD;
        ans %= MOD;
    }
    ans *= fact[N][N];
    ans %= MOD;
    cout << ans << endl;

    return 0;
}