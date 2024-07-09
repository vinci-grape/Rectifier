#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<int> s;
    for (int i = N; i < a.size(); i += 2) {
        s.push_back(a[i]);
    }
    int sum = 0;
    for (int num : s) {
        sum += num;
    }
    cout << sum << endl;


    return 0;
}