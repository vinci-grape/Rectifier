#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    for(int i = 1; i <= n; i++) {
        cout << a.count(i) + b.count(i) << endl;
    }
    return 0;
}