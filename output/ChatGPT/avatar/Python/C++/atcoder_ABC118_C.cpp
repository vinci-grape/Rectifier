#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int gcd = accumulate(A.begin(), A.end(), A[0], __gcd);
    cout << gcd << endl;

    return 0;
}