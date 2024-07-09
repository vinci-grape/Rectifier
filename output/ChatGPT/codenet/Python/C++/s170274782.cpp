#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> A(2, vector<int>(N));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    vector<int> ans(N);
    for (int i = 0; i < N; i++) {
        vector<int> baselis = A[0];
        vector<int> groundlis = A[1];
        int count = 0;
        count += accumulate(baselis.begin(), baselis.begin() + i + 1, 0);
        count += accumulate(groundlis.begin() + i, groundlis.end(), 0);
        ans[i] = count;
    }
    
    cout << *max_element(ans.begin(), ans.end()) << endl;
    
    return 0;
}