#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool isDistinct(vector<int>& A) {
    set<int> distinct;
    for (int i = 0; i < A.size(); i++) {
        if (distinct.find(A[i]) != distinct.end()) {
            return false;
        }
        distinct.insert(A[i]);
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    if (isDistinct(A)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}