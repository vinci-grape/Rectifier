#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<double> sortedArr;
    for (int i = 0; i < n; i++) {
        double decimalPart = arr[i] - (int)arr[i];
        if (decimalPart != 0) {
            sortedArr.push_back(decimalPart);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    int o = 2 * n - sortedArr.size();
    double arrSum = 0;
    for (int i = 0; i < sortedArr.size(); i++) {
        arrSum += sortedArr[i];
    }
    int res = 2e9;
    for (int i = 0; i <= n; i++) {
        if (i + o >= n) {
            res = min(res, abs(i - arrSum));
        }
    }
    cout << fixed;
    cout.precision(3);
    cout << res << endl;

    return 0;
}