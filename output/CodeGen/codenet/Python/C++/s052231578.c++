# C++ - AtCoder Beginner Contest 111

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int ans_idx = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == N) {
            ans_idx = i;
            break;
        }
    }
    cout << arr[ans_idx] << endl;
    return 0;
}