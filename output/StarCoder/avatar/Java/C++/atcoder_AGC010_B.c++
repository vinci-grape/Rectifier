#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    if (possible(N, A))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

bool possible(int N, int A[])
{
    long long sum = 0;
    for (int i = 0; i < N; i++) sum += A[i];
    long long NS = (long long)N * (N + 1) / 2;
    if (sum % NS!= 0) return false;
    long long K = sum / NS;
    for (int i = 0; i < N; i++)
    {
        int j = i == 0? N - 1 : i - 1;
        long long d = K - (A[i] - A[j]);
        if (d < 0 || d % N!= 0) return false;
    }
    return true;
}