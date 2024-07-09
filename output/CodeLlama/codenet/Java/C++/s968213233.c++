#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    sort(A.begin(), A.end());

    long long res = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({A[N - 1], A[N - 1]});

    for (int i = N - 2; i >= 0; i--) {
        int a = A[i];
        auto place = q.top();
        q.pop();
        res += min(place.first, place.second);
        q.push({place.first, a});
        q.push({a, place.second});
    }
    cout << res << endl;

    return 0;
}