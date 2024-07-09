#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    priority_queue<int> q;
    for (int i = 0; i < N; i++) {
        q.push(arr[i]);
        if (arr[i] <= q.top()) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}