#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> pre(n+1);

    for(int i=1;i<=n;i++) {
        cin >> pre[i];
        pre[i] += pre[i-1];
    }

    long long minDiff = LLONG_MAX;

    for(int i=1;i<n;i++) {
        long long val1 = pre[i], val2 = pre[n]-pre[i];
        minDiff = min(minDiff, abs(val1-val2));
    }

    cout << minDiff << endl;
    return 0;
}