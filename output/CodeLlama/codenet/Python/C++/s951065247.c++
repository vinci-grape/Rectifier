#include <bits/stdc++.h>
using namespace std;

int N, A, B, C;
int l[100005];

int dfs(int cur, int a, int b, int c) {
    if (cur == N) {
        return abs(A - a) + abs(B - b) + abs(C - c) - 30;
    }
    int no_add = dfs(cur + 1, a, b, c);
    int add_a = dfs(cur + 1, a + l[cur], b, c) + 10;
    int add_b = dfs(cur + 1, a, b + l[cur], c) + 10;
    int add_c = dfs(cur + 1, a, b, c + l[cur]) + 10;

    return min(no_add, add_a, add_b, add_c);
}

int main() {
    cin >> N >> A >> B >> C;
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }
    cout << dfs(0, 0, 0, 0);
}