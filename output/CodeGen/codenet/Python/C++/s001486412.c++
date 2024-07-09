#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int below = 0;
    for (int i = 0; i < n; i++) {
        below += 1 / a[i];
    }
    cout << 1 / below;
    return 0;
}