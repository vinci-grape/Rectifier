#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += l[i];
        if (max < l[i]) {
            max = l[i];
        }
        if (min > l[i]) {
            min = l[i];
        }
    }
    
    cout << min << " " << max << " " << sum << endl;

    return 0;
}