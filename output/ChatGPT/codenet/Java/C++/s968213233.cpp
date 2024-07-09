#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    sort(A.begin(), A.end());

    long long res = 0;

    priority_queue<vector<int>, vector<vector<int>>, function<bool(vector<int>, vector<int>)>> q([](vector<int> e1, vector<int> e2) {
        return min(e1[0], e1[1]) < min(e2[0], e2[1]);
    });
    q.push({A[N - 1], A[N - 1]});

    for (int i = N - 2; i >= 0; i--) {
        int a = A[i];
        vector<int> place = q.top();
        q.pop();
        res += min(place[0], place[1]);
        q.push({place[0], a});
        q.push({a, place[1]});
    }
    cout << res << endl;

    return 0;
}