#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> *list = new vector<int>[100001];
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        if (list[a] == NULL) {
            list[a] = new vector<int>();
        }
        list[a].push_back(b);
    }
    int res = 0;
    priority_queue<int, vector<int>, greater<int>> pqueue;
    for (int i = 1; i <= M; i++) {
        if (list[i]!= NULL) {
            for (int j = 0; j <