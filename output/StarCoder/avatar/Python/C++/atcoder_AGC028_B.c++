#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    vector < int > A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    int M = 1000000;
    int Nsq = 1000;
    vector < int > fact(M);
    fact[0] = 1;
    for (int n = 1; n < Nsq; n++)
        fact[n] = fact[n-1] * n % M;
    for (int n = 1; n < Nsq; n++)
        fact[n] = fact[n] * fact[n-1] % M;
    int ans = 0;
    for (int i = 0; i < N; i++)
        ans = (ans + A[i] * fact[i] % M) % M;
    cout << ans << endl;
    return 0;
}