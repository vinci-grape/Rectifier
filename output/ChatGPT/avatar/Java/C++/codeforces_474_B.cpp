#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int> arr, int q, int n, int m) {
    int res = 0;
    int i = 0, j = n;
    while (i <= j) {
        int md = i + (j - i) / 2;
        if (arr[md] == q)
            return md;
        else if (arr[md] > q) {
            res = md;
            j = md - 1;
        } else
            i = md + 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x + arr[i - 1];
    }
    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
        cin >> q[i];
    for (int k = 0; k < m; k++)
        cout << fun(arr, q[k], n, m) + 1 << endl;
}