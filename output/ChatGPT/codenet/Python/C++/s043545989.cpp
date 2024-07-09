#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    unordered_map<int, int> B;
    for (int i = 0; i < N; i++) {
        B[a[i]]++;
    }
    vector<int> k;
    vector<int> v;
    for (auto it = B.begin(); it != B.end(); it++) {
        k.push_back(it->first);
        v.push_back(it->second);
    }
    if (B.size() == 3 && (k[0] ^ k[1] ^ k[2]) == 0 && v[0] == v[1] && v[1] == v[2]) {
        cout << "Yes" << endl;
    }
    else if (B.size() == 2 && B[0] && (v[0] == 2 * v[1] || v[1] == 2 * v[0])) {
        cout << "Yes" << endl;
    }
    else if (B.size() == 1 && B[0]) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}