#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A[2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            int tmp;
            cin >> tmp;
            A[i].push_back(tmp);
        }
    }

    vector<int> ans;
    int count = 0;
    for (int i = 0; i < N; i++) {
        vector<int> baselis = A[0];
        vector<int> groundlis = A[1];
        count = 0;
        for (int j = 0; j <= i; j++) {
            count += baselis[j];
        }
        for (int j = i; j < N; j++) {
            count += groundlis[j];
        }
        ans.push_back(count);
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;

    return 0;
}