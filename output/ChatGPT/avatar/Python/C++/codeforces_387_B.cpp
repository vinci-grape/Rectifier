#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> round_complexity(n);
    vector<int> george_complexity(m);
    
    for (int i = 0; i < n; i++) {
        cin >> round_complexity[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> george_complexity[i];
    }
    
    int i = 0;
    int j = 0;
    
    while (i < n && j < m) {
        i += (round_complexity[i] <= george_complexity[j]);
        j++;
    }
    
    cout << n - i << endl;
    
    return 0;
}