#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> b(n * 2, 1);
    b[0] = b[n - 1] = b[n] = b[2 * n - 1] = 0;
    
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        b[r - 1] = b[n + c - 1] = 0;
    }
    
    if (n % 2 && b[n / 2] && b[n + n / 2]) {
        b[n / 2] = 0;
    }
    
    int sum = 0;
    for (int i = 0; i < b.size(); i++) {
        sum += b[i];
    }
    
    cout << sum << endl;
    
    
    return 0;
}