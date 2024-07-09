#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int id = 0;
    int l, r;
    cin >> l >> r;
    for (int i = 1; i < n; i++) {
        int li, ri;
        cin >> li >> ri;
        if (li <= l && r <= ri) id = i;
        else if (li < l || r < ri) id = n;
        l = min(l, li);
        r = max(r, ri);
    }
    cout << (id == n ? -1 : id + 1) << endl;
    return 0;
}