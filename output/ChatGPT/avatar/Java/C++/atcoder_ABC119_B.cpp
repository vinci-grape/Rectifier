#include <iostream>
#include <vector>
#include <string>

using namespace std;

double solve(vector<double>& x, vector<string>& u) {
    double sum = 0;
    for (int i = 0; i < x.size(); ++i) {
        if (u[i] == "JPY") {
            sum += x[i];
        } else {
            sum += x[i] * 380000;
        }
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    
    vector<double> x(N);
    vector<string> u(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> x[i] >> u[i];
    }
    
    cout << solve(x, u) << endl;
    
    return 0;
}