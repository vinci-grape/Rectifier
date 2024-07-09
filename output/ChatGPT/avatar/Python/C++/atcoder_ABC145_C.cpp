#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

double solve(int N, vector<int>& x, vector<int>& y) {
    vector<int> indices(N);
    for (int i = 0; i < N; i++) {
        indices[i] = i;
    }
    vector<vector<int>> permutations;
    do {
        permutations.push_back(indices);
    } while (next_permutation(indices.begin(), indices.end()));
    
    vector<double> distances;
    for (auto permutation : permutations) {
        double total_distance = 0;
        for (int i = 0; i < N - 1; i++) {
            int f = permutation[i];
            int t = permutation[i + 1];
            double distance = sqrt(pow(x[t] - x[f], 2) + pow(y[t] - y[f], 2));
            total_distance += distance;
        }
        distances.push_back(total_distance);
    }
    
    double result = 0;
    for (auto distance : distances) {
        result += distance;
    }
    result /= distances.size();
    
    return result;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> x(N);
    vector<int> y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    
    double result = solve(N, x, y);
    cout << result << endl;
    
    return 0;
}