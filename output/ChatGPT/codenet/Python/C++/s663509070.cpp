#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<vector<int>> mat;
    for (int d = 0; d < N; d++) {
        vector<int> row;
        for (int i = 0; i < D; i++) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        mat.push_back(row);
    }
    
    int c = 0;
    for (int i = 0; i < mat.size() - 1; i++) {
        for (int j = i + 1; j < mat.size(); j++) {
            double dist = sqrt(pow(mat[i][0] - mat[j][0], 2) + pow(mat[i][1] - mat[j][1], 2));
            if (dist == (int)dist) {
                c++;
            }
        }
    }
    
    cout << c << endl;
    
    return 0;
}