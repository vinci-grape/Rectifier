#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        int m, l;
        cin >> m >> l;
        arr[i] = arr[i] + (l - m);
        arr[i] = arr[i] - arr[i - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}