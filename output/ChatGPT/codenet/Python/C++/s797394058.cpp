#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int x = 1;
    
    vector<int> N_list(N);
    for (int i = 0; i < N; i++) {
        N_list[i] = x + 1;
        x++;
    }
    
    int m = pow(N_list.size(), 3);
    
    cout << m << endl;
    
    
    return 0;
}