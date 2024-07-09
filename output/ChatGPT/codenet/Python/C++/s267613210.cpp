#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> dist;
    for (int i = 0; i < N-1; i++) {
        dist.push_back(A[i+1]-A[i]);
    }
    dist.push_back(K+A[0]-A[N-1]);
    int maxv = *max_element(dist.begin(), dist.end());
    int sum_dist = accumulate(dist.begin(), dist.end(), 0);
    int result = sum_dist - maxv;
    cout << result << endl;

}