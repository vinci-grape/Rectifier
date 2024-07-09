#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<long long> cum_remainders(N+1, 0);
    for(int i = 1; i <= N; i++) {
        cum_remainders[i] = (cum_remainders[i-1] + A[i-1]) % M;
    }
    
    map<long long, int> remainder_counts;
    for(int i = 0; i <= N; i++) {
        remainder_counts[cum_remainders[i]]++;
    }
    
    long long combinations = 0;
    for(auto it = remainder_counts.begin(); it != remainder_counts.end(); it++) {
        long long count = it->second;
        combinations += count * (count - 1) / 2;
    }
    
    cout << combinations << endl;
    
    return 0;
}