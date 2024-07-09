#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    long long int cum_remainders[N + 1];
    cum_remainders[0] = 0;
    for(int i = 0; i < N; i++)
        cum_remainders[i + 1] = (cum_remainders[i] + A[i]) % M;
    unordered_map<long long int, int> remainder_counts;
    for(int i = 0; i < N + 1; i++)
        remainder_counts[cum_remainders[i]]++;
    long long int combinations = 0;
    for(auto it = remainder_counts.begin(); it!= remainder_counts.end(); it++)
        combinations += it->second * (it->second - 1) / 2;
    cout << combinations << endl;
    return 0;
}