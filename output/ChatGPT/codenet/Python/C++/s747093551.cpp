#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    vector<int> y(M);
    for (int i = 0; i < M; i++) {
        cin >> y[i];
    }
    
    if (*max_element(x.begin(), x.end()) < *min_element(y.begin(), y.end()) &&
        max(X, *max_element(x.begin(), x.end())) < min(Y, *min_element(y.begin(), y.end()))) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
    
    return 0;
}