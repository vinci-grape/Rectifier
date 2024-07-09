#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int total = accumulate(a.begin(), a.end(), 0, bit_xor<int>());
    for (int i = 0; i < N; i++) {
        cout << (a[i] ^ total) << " ";
    }
    cout << endl;
    
    
    return 0;
}