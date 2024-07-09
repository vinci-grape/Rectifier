#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total ^= a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] ^ total << " ";
    }
    return 0;
}