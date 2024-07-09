#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> dist(N-1);
    for (int i = 0; i < N-1; i++) {
        dist[i] = A[i+1] - A[i];
    }
    dist.push_back(K + A[0] - A[N-1]);
    int maxv = *max_element(dist.begin(), dist.end());
    cout << (sum(dist) - maxv) << endl;
    return 0;
}