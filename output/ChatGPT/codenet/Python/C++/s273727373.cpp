#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> B(A.begin(), A.end());
    int count = 1;
    for (int i = 0; i < N; i++) {
        B[A[i]-1] = count;
        count++;
    }
    
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    
    return 0;
}