#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;
    
    vector<long long> H(N);
    vector<bool> ans(N, true);
    
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    
    for (int i = 0; i < M; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        
        if (H[temp1 - 1] < H[temp2 - 1]) {
            ans[temp1 - 1] = false;
        } else if (H[temp1 - 1] > H[temp2 - 1]) {
            ans[temp2 - 1] = false;
        } else {
            ans[temp1 - 1] = false;
            ans[temp2 - 1] = false;
        }
    }
    
    int ans2 = 0;
    for (int i = 0; i < N; i++) {
        if (ans[i]) {
            ans2++;
        }
    }
    
    cout << ans2 << endl;
    
    // End of code
}