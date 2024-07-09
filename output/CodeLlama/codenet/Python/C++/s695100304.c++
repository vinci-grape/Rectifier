#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}