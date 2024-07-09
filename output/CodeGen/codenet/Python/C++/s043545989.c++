#include <iostream>
#include <map>
#include <string>
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
    map<int, int> B;
    for (int i = 0; i < N; i++) {
        B[a[i]]++;
    }
    vector<int> k(B.size());
    vector<int> v(B.size());
    for (auto it = B.begin(); it!= B.end(); it++) {
        k[it->first] = it->first;
        v[it->first] = it->second;
    }
    if (B.size() == 3 && k[0]^k[1]^k[2] == 0 && v[0] == v[1] == v[2]) {
        cout << "Yes" << endl;
    } else if (B.size() == 2 && 0 in k and (v[0] == 2*v[1] or v[1] == 2*v[0])) {
        cout << "Yes" << endl;
    } else if (B.size() == 1 && 0 in k) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}