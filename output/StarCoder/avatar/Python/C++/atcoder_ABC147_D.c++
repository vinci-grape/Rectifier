#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    long long result = 0;
    for (int b = 0; b < 60; b++)
    {
        int bs = 0;
        for (int i = 0; i < N; i++)
            bs += (A[i] >> b) & 1;
        result = (result + bs * (N - bs) * (1 << b)) % 1000000007;
    }
    cout << result << endl;
    return 0;
}