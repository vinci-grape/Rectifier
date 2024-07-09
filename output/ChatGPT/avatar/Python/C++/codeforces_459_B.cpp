#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l1(n);
    for (int i = 0; i < n; i++) {
        cin >> l1[i];
    }
    sort(l1.begin(), l1.end());
    int a = l1[n-1];
    int b = l1[0];
    if (a == b) {
        cout << a - b << " " << (n) * (n-1) / 2 << endl;
    } else {
        int ac = count(l1.begin(), l1.end(), a);
        int bc = count(l1.begin(), l1.end(), b);
        cout << a - b << " " << ac * bc << endl;
    }

    return 0;
}