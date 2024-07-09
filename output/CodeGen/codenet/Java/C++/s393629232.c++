#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxv = INT_MIN;
    int minv = 0;
    for (int i = 0; i < n; i++) {
        int ri;
        cin >> ri;
        maxv = max(maxv, ri - minv);
        minv = min(minv, ri);
    }
    cout << maxv << endl;
    return 0;
}