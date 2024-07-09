#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> list;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        list.push_back(x);
    }
    vector<long long> odd;
    long long sum = 0;
    for (long long i : list) {
        if (i % 2 == 0)
            sum += i;
        else
            odd.push_back(i);
    }
    sort(odd.begin(), odd.end());
    for (long long i : odd)
        sum += i;
    if (odd.size() % 2 != 0)
        sum -= odd[0];
    cout << sum << endl;
    return 0;
}