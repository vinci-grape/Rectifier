#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int max = 0;
    for (int l = 0; l < n - 1; l++) {
        int count = 0;
        while (l < n - 1 && h[l] >= h[l + 1]) {
            l++;
            count++;
        }
        max = max > count? max : count;
    }
    cout << max;
    return 0;
}