#include <iostream>
#include <queue>
using namespace std;

int solve() {
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
    return sum;
}

int main() {
    cout << solve() << endl;
}