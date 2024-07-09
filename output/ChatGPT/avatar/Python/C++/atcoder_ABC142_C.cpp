#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> A(N);
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A[i] = make_pair(i + 1, x);
    }

    sort(A.begin(), A.end(), compare);

    for (int i = 0; i < N - 1; i++) {
        cout << A[i].first << " ";
    }
    cout << A[N - 1].first << endl;

    return 0;
}