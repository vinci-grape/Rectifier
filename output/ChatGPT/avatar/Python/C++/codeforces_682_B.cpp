#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (l[i] > c) {
            c++;
        }
    }
    cout << c + 1 << endl;

    return 0;
}