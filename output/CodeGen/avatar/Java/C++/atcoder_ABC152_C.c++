#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    priority_queue<int, vector<int>, greater<int> > q;
    for (int i = 0; i < N; i++) {
        q.push(arr[i]);
        if (arr[i] <= q.top()) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}