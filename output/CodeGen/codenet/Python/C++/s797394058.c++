#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> x(N+1);
    for(int i = 1; i <= N; i++) {
        cin >> x[i];
    }
    vector<vector<int>> N_list(N+1);
    for(int i = 1; i <= N; i++) {
        N_list[i].push_back(x[i]);
    }
    vector<vector<vector<int>>> n(N+1);
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            for(int k = 1; k <= N; k++) {
                n[i].push_back(N_list[i]);
            }
        }
    }
    int m = n.size();
    cout << m << endl;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            for(int k = 1; k <= N; k++) {
                cout << n[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}