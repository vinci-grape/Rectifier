#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long min_val;

void util(vector<long long>& arr, vector<string>& ops, int idx) {
    if (idx == 3) {
        min_val = min(min_val, arr[0]);
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            vector<long long> a;
            for (int k = 0; k < arr.size(); k++) {
                if (k != j && k != i) {
                    a.push_back(arr[k]);
                }
            }
            long long res;
            if (idx < 3 && ops[idx] == "+") {
                res = arr[i] + arr[j];
            } else {
                res = arr[i] * arr[j];
            }
            a.push_back(res);
            util(a, ops, idx + 1);
        }
    }
}

int main() {
    min_val = LLONG_MAX;
    vector<long long> arr(4);
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    vector<string> ops(3);
    for (int i = 0; i < 3; i++) {
        cin >> ops[i];
    }
    util(arr, ops, 0);
    cout << min_val << endl;
}