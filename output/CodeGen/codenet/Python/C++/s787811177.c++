#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *ls = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> ls[i];
    }
    sort(ls, ls + n, greater<int>());
    int taka = 0, aoki = 0;
    for (int i = 0; i < n; i += 2) {
        taka += ls[i];
        aoki += ls[i + 1];
    }
    cout << taka - aoki << endl;
    delete [] ls;
    return 0;
}