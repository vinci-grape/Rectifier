#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> list(n);
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    vector<long> odd(n);
    long sum = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] % 2 == 0) {
            sum += list[i];
        } else {
            odd.push_back(list[i]);
        }
    }
    sort(odd.begin(), odd.end());
    for (int i = 0; i < odd.size(); i++) {
        sum += odd[i];
    }
    if (odd.size() % 2!= 0) {
        sum -= odd[0];
    }
    cout << sum << endl;
    return 0;
}